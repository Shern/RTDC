package rtdc.web.server.service;

import org.hibernate.Session;
import org.hibernate.Transaction;
import org.hibernate.criterion.Restrictions;
import org.mindrot.jbcrypt.BCrypt;
import rtdc.core.event.ActionCompleteEvent;
import rtdc.core.event.ErrorEvent;
import rtdc.core.event.FetchUsersEvent;
import rtdc.core.json.JSONObject;
import rtdc.core.model.User;
import rtdc.core.util.Util;
import rtdc.web.server.config.PersistenceConfig;
import rtdc.web.server.model.UserCredentials;

import javax.servlet.http.HttpServletRequest;
import javax.validation.ConstraintViolation;
import javax.validation.Validation;
import javax.ws.rs.*;
import javax.ws.rs.core.Context;
import java.util.List;
import java.util.Set;

import static rtdc.core.model.ApplicationPermission.ADMIN;
import static rtdc.core.model.ApplicationPermission.USER;

@Path("users")
public class UserService {

    @GET
    public String getUsers(@Context HttpServletRequest req){
        //AuthService.hasRole(req, USER, ADMIN);
        Session session = PersistenceConfig.getSessionFactory().openSession();
        Transaction transaction = null;
        List<User> users = null;
        try{
            transaction = session.beginTransaction();
            users = (List<User>) session.createCriteria(User.class).list();
            transaction.commit();
        } catch (RuntimeException e) {
            if(transaction != null)
                transaction.rollback();
            throw e;
        } finally{
            session.close();
        }
        return new FetchUsersEvent(users).toString();
    }

    @PUT
    @Consumes("application/x-www-form-urlencoded")
    @Produces("application/json")
    public String updateUser(@Context HttpServletRequest req, @FormParam("password") String password, @FormParam("user" )String userString){
        //AuthService.hasRole(req, ADMIN);
        User user = new User(new JSONObject(userString));

        Set<ConstraintViolation<User>> violations = Validation.buildDefaultValidatorFactory().getValidator().validate(user);
        if(!violations.isEmpty())
            return new ErrorEvent(violations.toString()).toString();

        if(password == null || password.isEmpty() || password.length() < 4)
            return new ErrorEvent("Password must be longer than 4 characters").toString();
        Session session = PersistenceConfig.getSessionFactory().openSession();
        Transaction transaction = null;
        try{
            transaction = session.beginTransaction();

            UserCredentials credentials = null;
            if(user.getId() == 0) {
                session.saveOrUpdate(user);
                credentials = new UserCredentials();
            }else {
                session.merge(user);
                credentials = (UserCredentials) session.load(UserCredentials.class, user.getId());
            }

            credentials.setUser(user);
            credentials.setSalt(BCrypt.gensalt());
            credentials.setPasswordHash(BCrypt.hashpw(password, credentials.getSalt()));

            session.saveOrUpdate(credentials);
            transaction.commit();
        } catch (RuntimeException e) {
            if(transaction != null)
                transaction.rollback();
            throw e;
        } finally {
            session.close();
        }

        return new ActionCompleteEvent(user.getId(), "user").toString();
    }

    @DELETE
    @Path("{id}")
    @Produces("application/json")
    public String deleteUser(@Context HttpServletRequest req, @PathParam("id") int id){
        //AuthService.hasRole(req, ADMIN);
        Session session = PersistenceConfig.getSessionFactory().openSession();
        Transaction transaction = null;
        try{
            transaction = session.beginTransaction();
            User user = (User) session.load(User.class, id);
            session.delete(user);
            transaction.commit();
        } catch (RuntimeException e) {
            if(transaction != null)
                transaction.rollback();
            throw e;
        } finally {
            session.close();
        }
        return new ActionCompleteEvent(id, "user").toString();
    }

}
