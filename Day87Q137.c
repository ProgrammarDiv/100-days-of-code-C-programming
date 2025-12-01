//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum role {ADMIN, USER, GUEST};

int main() {
    enum role user_role = ADMIN;

    switch (user_role) {
        case ADMIN:
            printf("Welcome, Admin!\n");
            break;
        case USER:
            printf("Welcome, User!\n");
            break;
        case GUEST:
            printf("Welcome, Guest!\n");
            break;
        default:
            printf("Unknown role.\n");
    }
    return 0;
}
