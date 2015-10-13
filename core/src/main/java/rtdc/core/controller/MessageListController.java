package rtdc.core.controller;

import rtdc.core.Session;
import rtdc.core.event.Event;
import rtdc.core.event.FetchRecentContactsEvent;
import rtdc.core.event.FetchMessagesEvent;
import rtdc.core.event.FetchUsersEvent;
import rtdc.core.model.Message;
import rtdc.core.model.SimpleComparator;
import rtdc.core.model.User;
import rtdc.core.service.Service;
import rtdc.core.view.MessageListView;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.HashSet;

public class MessageListController extends Controller<MessageListView> implements FetchRecentContactsEvent.Handler, FetchMessagesEvent.Handler, FetchUsersEvent.Handler {

    private ArrayList<Message> recentContacts;
    private ArrayList<Message> messages;
    private ArrayList<User> contacts;

    public MessageListController(MessageListView view){
        super(view);
        Event.subscribe(FetchRecentContactsEvent.TYPE, this);
        Event.subscribe(FetchMessagesEvent.TYPE, this);
        Event.subscribe(FetchUsersEvent.TYPE, this);
        Service.getRecentContacts(Session.getCurrentSession().getUser().getId());
        Service.getUsers();
        //recentContacts = getRecentContacts();
        //sortRecentContacts(Message.Properties.timeSent);
    }

    @Override
    String getTitle() {
        return "Messages";
    }

    public void sortMessages(Message.Properties property){
        Collections.sort(messages, SimpleComparator.forProperty(property).build());
        Collections.reverse(messages);
        view.setMessages(messages);
    }

    public void sortRecentContacts(Message.Properties property){
        Collections.sort(recentContacts, SimpleComparator.forProperty(property).build());
        view.setRecentContacts(recentContacts);

        // We load the messages for the most recent contact
        Message lastMessage = recentContacts.get(recentContacts.size() - 1);
        Service.getMessages(lastMessage.getSender().getId(), lastMessage.getReceiver().getId());
    }

    public void sortContacts(User.Properties property){
        Collections.sort(contacts, SimpleComparator.forProperty(property).build());
        view.setContacts(contacts);
    }

    @Override
    public void onMessagesFetched(FetchMessagesEvent event) {
        messages = new ArrayList<>(event.getMessages());
        sortMessages(Message.Properties.timeSent);
    }

    @Override
    public void onRecentContactsFetched(FetchRecentContactsEvent event) {
        recentContacts = new ArrayList<>(event.getRecentContacts());
        sortRecentContacts(Message.Properties.timeSent);
    }

    @Override
    public void onUsersFetched(FetchUsersEvent event) {
        contacts = new ArrayList<>(event.getUsers());
        sortContacts(User.Properties.lastName);
    }

    @Override
    public void onStop() {
        super.onStop();
        Event.unsubscribe(FetchRecentContactsEvent.TYPE, this);
        Event.unsubscribe(FetchMessagesEvent.TYPE, this);
    }

    // TODO SCRAP THAT
    private ArrayList<Message> getRecentContacts(){
        ArrayList<Message> recentContacts = new ArrayList<>();
        User sender = new User();
        sender.setFirstName("Nathaniel");
        sender.setLastName("Aumonttt");
        sender.setUsername("Nathaniel");
        sender.setId(5);

        Message message2 = new Message();
        User receiver2 = new User();
        receiver2.setFirstName("Emilie");
        receiver2.setLastName("Luskberg");
        message2.setSender(sender);
        message2.setReceiver(receiver2);
        message2.setContent("Sounds good!");
        message2.setTimeSent(new Date(2015, 10, 5));
        message2.setStatus(Message.Status.read);
        //recentContacts.add(message2);

        Message message = new Message();
        User receiver = new User();
        receiver.setFirstName("Jonathan");
        receiver.setLastName("Ermel");
        receiver.setUsername("Qwe");
        receiver.setId(6);
        message.setSender(sender);
        message.setReceiver(receiver);
        message.setContent("Hi, I hope you're doing good! Do you think we could meet up sometime this afternoon?");
        message.setTimeSent(new Date(2015, 10, 6));
        message.setStatus(Message.Status.read);
        recentContacts.add(message);

        return recentContacts;
    }

    // TODO SCRAP THAT
    public void setupMessageList(){
        messages = getMessages();
        sortMessages(Message.Properties.timeSent);
    }

    private ArrayList<Message> getMessages(){
        ArrayList<Message> messageList = new ArrayList<>();
        for(int i = 0; i < 10; i++){
            Message message = new Message();
            User sender = new User();
            sender.setFirstName("Jonathan");
            sender.setLastName("Ermel");
            sender.setUsername("Qwe");
            sender.setId(87);
            User receiver = new User();
            receiver.setFirstName("Nathaniel");
            receiver.setLastName("Aumonttt");
            receiver.setId(86);
            receiver.setUsername("Nathaniel");
            message.setReceiver(receiver);
            message.setSender(sender);
            message.setContent(i + "Hi, I hope you're doing good! Do you think we could meet up sometime this afternoon?");
            message.setTimeSent(new Date());
            message.setContent("Hi, I hope you're doing good! Do you think we could meet up sometime this afternoon?");
            message.setTimeSent(new Date(2015, 9, i+1));
            messageList.add(message);

            if(i == 3){
                Message message3 = new Message();
                message3.setSender(sender);
                message.setReceiver(receiver);
                message3.setContent(i + "I'd like to discuss a few things about my new schedule");
                message3.setTimeSent(new Date());
                message3.setContent("I'd like to discuss a few things about my new schedule");
                message3.setTimeSent(new Date(2015, 9, i+1));
                messageList.add(message3);

                Message message4 = new Message();
                message4.setSender(sender);
                message.setReceiver(receiver);
                message4.setContent(i + "Oh I forgot to mention... I'll only be available after 1 PM");
                message4.setTimeSent(new Date());
                message4.setContent("Oh I forgot to mention... I'll only be available after 1 PM");
                message4.setTimeSent(new Date(2015, 9, i+1));
                messageList.add(message4);
            }

            Message message2 = new Message();
            User sender2 = new User();
            sender2.setFirstName("Nathaniel");
            sender2.setLastName("Aumonttt");
            sender2.setId(86);
            sender2.setUsername("Nathaniel");
            message2.setSender(sender2);
            message2.setReceiver(sender);
            message2.setContent(i + "Oh hi John! Sure, lets meet around 2 PM in my office.");
            message2.setTimeSent(new Date());
            message2.setContent("Oh hi John! Sure, lets meet around 2 PM in my office.");
            message2.setTimeSent(new Date(2015, 9, i+1));
            messageList.add(message2);
        }
        return messageList;
    }
}
