// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

// Define the enum for User Roles
enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    // Assign a role to the current user
    enum UserRole currentRole = ADMIN;

    // Display a message based on the role
    switch (currentRole) {
        case ADMIN:
            printf("Welcome, Admin! You have full access to the system.\n");
            break;
        case USER:
            printf("Welcome, User! You have standard access to the system.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have limited view-only access.\n");
            break;
        default:
            printf("Error: Unknown user role.\n");
    }

    return 0;
}