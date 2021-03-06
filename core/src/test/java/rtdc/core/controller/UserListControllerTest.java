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

package rtdc.core.controller;

import com.google.common.collect.ImmutableSet;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.ArgumentCaptor;
import org.mockito.Captor;
import org.powermock.api.mockito.PowerMockito;
import org.powermock.core.classloader.annotations.PrepareForTest;
import org.powermock.modules.junit4.PowerMockRunner;
import rtdc.core.event.FetchUsersEvent;
import rtdc.core.model.Unit;
import rtdc.core.model.User;
import rtdc.core.service.Service;
import rtdc.core.view.UserListView;

import java.util.ArrayList;
import java.util.List;

import static org.junit.Assert.*;
import static org.mockito.Mockito.*;

@RunWith(PowerMockRunner.class)
@PrepareForTest(Service.class)
public class UserListControllerTest {

    private UserListController userListController;
    private UserListView mockView;
    private FetchUsersEvent mockEvent;
    private Service mockService;

    private User user1,user2,user3;

    @Captor
    private ArgumentCaptor<ArrayList<User>> setUsersArgument;

    @Before
    public void setup(){
        // Mock classes
        PowerMockito.mockStatic(Service.class);

        mockView = mock(UserListView.class);
        mockEvent = mock(FetchUsersEvent.class);

        // Stub Method call
        Unit unit123 = UnitListControllerTest.buildUnit(123,"Emergency", 16, 3, 4, 2, 10, 8);
        Unit unit456 = UnitListControllerTest.buildUnit(456,"Surgery", 40, 6, 3, 4, 13, 10);

        user1 = buildUser(1, "jenny", "jenny@example.com","Jennifer","Smith", User.Permission.USER,"6135551234l",User.Role.NURSE,unit123);
        user2 = buildUser(2, "pam", "pam@hostname.com","Pamela","Jones",User.Permission.MANAGER,"6134448899l",User.Role.UNIT_MANAGER,unit456);
        user3 = buildUser(3, "kim", "kim@xyz.com","Kimberly","Shepard",User.Permission.ADMIN,"6135559876l",User.Role.ADMIN,null);

        ImmutableSet<User> userSet = ImmutableSet.of(user1, user2, user3);
        when(mockEvent.getUsers()).thenReturn(userSet);

        // Create controller
        userListController = new UserListController(mockView);
    }


    @Test
    public void onUsersFetched_normalUserList(){
        userListController.onUsersFetched(mockEvent);
        verify(mockView).setUsers(setUsersArgument.capture());
        assertFalse(setUsersArgument.getValue().isEmpty());
    }

    @Test
    public void onUsersFetched_emptyUnitList(){
        // Setup empty unit list for FetchUnitEvent
        FetchUsersEvent mockEmptyListEvent = mock(FetchUsersEvent.class);
        ImmutableSet<User> userSet = ImmutableSet.of();
        when(mockEmptyListEvent.getUsers()).thenReturn(userSet);

        // Test
        userListController.onUsersFetched(mockEmptyListEvent);
        verify(mockView).setUsers(setUsersArgument.capture());
        assertTrue(setUsersArgument.getValue().isEmpty());
    }

    @Test
    public void sortUsers_byId_ascending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user1); // 1
        expectedList.add(user2); // 2
        expectedList.add(user3); // 3

        // Test
        userListController.sortUsers(User.Properties.id, true);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byUsername_ascending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user1); // jenny
        expectedList.add(user3); // kim
        expectedList.add(user2); // pam

        // Test
        userListController.sortUsers(User.Properties.username, true);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byFirstName_ascending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user1); // Jennifer
        expectedList.add(user3); // Kimberly
        expectedList.add(user2); // Pamela

        // Test
        userListController.sortUsers(User.Properties.firstName, true);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byLastName_ascending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user2); // Jones
        expectedList.add(user3); // Shepard
        expectedList.add(user1); // Smith

        // Test
        userListController.sortUsers(User.Properties.lastName, true);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byEmail_ascending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user1); // jenny@example.com
        expectedList.add(user3); // kim@xyz.com
        expectedList.add(user2); // pam@hostname.com

        // Test
        userListController.sortUsers(User.Properties.email, true);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byPermission_ascending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user3); // Permission.ADMIN
        expectedList.add(user2); // Permission.MANAGER
        expectedList.add(user1); // Permission.USER

        // Test
        userListController.sortUsers(User.Properties.permission, true);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byRole_ascending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user3); // Administrator
        expectedList.add(user1); // Nurse
        expectedList.add(user2); // Unit Manager

        // Test
        userListController.sortUsers(User.Properties.role, true);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byPhone_ascending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user2); // 6134448899
        expectedList.add(user1); // 6135551234
        expectedList.add(user3); // 6135559876

        // Test
        userListController.sortUsers(User.Properties.phone, true);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byUnit_ascending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user3); // null
        expectedList.add(user1); // unit123 - Emergency
        expectedList.add(user2); // unit456 - Surgery

        // Test
        userListController.sortUsers(User.Properties.unit, true);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byId_descending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user3); // 3
        expectedList.add(user2); // 2
        expectedList.add(user1); // 1

        // Test
        userListController.sortUsers(User.Properties.id, false);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byUsername_descending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user2); // pam
        expectedList.add(user3); // kim
        expectedList.add(user1); // jenny

        // Test
        userListController.sortUsers(User.Properties.username, false);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byFirstName_descending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user2); // Pamela
        expectedList.add(user3); // Kimberly
        expectedList.add(user1); // Jennifer

        // Test
        userListController.sortUsers(User.Properties.firstName, false);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byLastName_descending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user1); // Smith
        expectedList.add(user3); // Shepard
        expectedList.add(user2); // Jones

        // Test
        userListController.sortUsers(User.Properties.lastName, false);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byEmail_descending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user2); // pam@hostname.com
        expectedList.add(user3); // kim@xyz.com
        expectedList.add(user1); // jenny@example.com

        // Test
        userListController.sortUsers(User.Properties.email, false);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byPermission_descending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user1); // Permission.USER
        expectedList.add(user2); // Permission.MANAGER
        expectedList.add(user3); // Permission.ADMIN

        // Test
        userListController.sortUsers(User.Properties.permission, false);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byRole_descending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user2); // Unit Manager
        expectedList.add(user1); // Nurse
        expectedList.add(user3); // Administrator

        // Test
        userListController.sortUsers(User.Properties.role, false);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byPhone_descending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user3); // 6135559876
        expectedList.add(user1); // 6135551234
        expectedList.add(user2); // 6134448899

        // Test
        userListController.sortUsers(User.Properties.phone, false);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    @Test
    public void sortUsers_byUnit_descending(){
        // Setup original list
        userListController.onUsersFetched(mockEvent);

        // Expected result
        List<User> expectedList = new ArrayList<>();
        expectedList.add(user2); // unit456 - Surgery
        expectedList.add(user1); // unit123 - Emergency
        expectedList.add(user3); // null

        // Test
        userListController.sortUsers(User.Properties.unit, false);
        verify(mockView, atLeastOnce()).setUsers(setUsersArgument.capture());
        ArrayList<User> actualList = setUsersArgument.getValue();

        // Compare expected & actual
        assertEquals(expectedList, actualList);
    }

    private User buildUser(int id, String username, String email, String firstName, String lastName, User.Permission permission,
                           String phone, User.Role role, Unit unit){
        User user = new User();
        user.setId(id);
        user.setUsername(username);
        user.setEmail(email);
        user.setFirstName(firstName);
        user.setLastName(lastName);
        user.setPermission(permission);
        user.setPhone(phone);
        user.setRole(role);
        user.setUnit(unit);

        return user;
    }
}
