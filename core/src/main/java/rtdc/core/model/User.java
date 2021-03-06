/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Olivier Clermont, Jonathan Ermel, Mathieu Fortin-Boulay, Philippe Legault & Nicolas Ménard
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

package rtdc.core.model;

import rtdc.core.i18n.ResBundle;
import rtdc.core.json.JSONObject;
import rtdc.core.util.Stringifier;

public class User extends RootObject {

    public enum Properties implements ObjectProperty<User> {
        id,
        username,
        firstName,
        lastName,
        email,
        permission,
        role,
        phone,
        unit
    }

    public enum Role {
        ADMIN,
        NURSE,
        STAKEHOLDER,
        UNIT_MANAGER,;

        public static Stringifier<Role> getStringifier(){
            return new Stringifier<Role>() {
                @Override
                public String toString(Role role) {
                    switch(role){
                        case ADMIN: return ResBundle.get().administrator();
                        case NURSE: return ResBundle.get().nurse();
                        case STAKEHOLDER: return ResBundle.get().stakeHolder();
                        case UNIT_MANAGER: return ResBundle.get().unitManager();
                        default: return role.name();
                    }
                }
            };
        }
    }

    public enum Permission {
        ADMIN, // Adds users, unit, and matches the two
        MANAGER, // See all the actions in the unit
        USER; // See their own actions

        public static Stringifier<Permission> getStringifier(){
            return new Stringifier<Permission>() {
                @Override
                public String toString(Permission permission) {
                    switch(permission){
                        case ADMIN: return ResBundle.get().admin();
                        case MANAGER: return ResBundle.get().manager();
                        case USER: return ResBundle.get().user();
                        default: return permission.name();
                    }
                }
            };
        }
    }

    private int id;
    private String username;
    private String firstName;
    private String lastName;
    private String email;
    private Permission permission;
    private Role role;
    private String phone;
    private Unit unit;

    public User(){}

    public User (JSONObject object){
        setId(object.optInt(Properties.id.name()));
        setUsername(object.optString(Properties.username.name()));
        setFirstName(object.optString(Properties.firstName.name()));
        setLastName(object.optString(Properties.lastName.name()));
        setEmail(object.optString(Properties.email.name()));
        setPhone(object.optString(Properties.phone.name()));

        permission = Permission.valueOf(object.optString(Properties.permission.name()));
        role = Role.valueOf(object.optString(Properties.role.name()));

        if(object.has(Properties.unit.name()))
            setUnit(new Unit(object.getJSONObject(Properties.unit.name())));
    }

    @Override
    public ObjectProperty[] getProperties() {
        return Properties.values();
    }

    @Override
    public String getType() {
        return "user";
    }

    @Override
    public Object getValue(ObjectProperty property) {
        switch((Properties) property){
            case id: return id;
            case username: return username;
            case firstName: return firstName;
            case lastName: return lastName;
            case email: return email;
            case permission: return permission;
            case role: return role;
            case phone: return phone;
            case unit: return unit;
        }
        return null;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getFirstName() {
        return firstName;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public Permission getPermission() {
        return permission;
    }

    public void setPermission(Permission permission) {
        this.permission = permission;
    }

    public Role getRole() {
        return role;
    }

    public void setRole(Role role) {
        this.role = role;
    }

    public String getPhone() {
        return phone;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    public Unit getUnit() {
        return unit;
    }

    public void setUnit(Unit unit) {
        this.unit = unit;
    }

    public float[] getProfileColor(){
        byte [] bytes = (getFirstName() + " " + getLastName()).getBytes();
        float hue = 0;
        for (int i = 0; i < bytes.length; i++)
        {
            hue += ((long) bytes[i] & 0xffL) << (8 * i);
            hue %= 360;
        }

        float saturation = 0.8f;
        float brightness = 0.4f; //Also known as value

        return new float[]{hue, saturation,brightness};
    }

}