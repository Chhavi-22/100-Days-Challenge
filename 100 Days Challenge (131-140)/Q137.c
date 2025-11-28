//Q137.Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

int main() {
    enum Role {ADMIN = 1, USER, GUEST};
    enum Role r;

    r = ADMIN;  
    switch(r) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! Please login to continue.\n");
            break;

        default:
            printf("Invalid role!\n");
    }

    return 0;
}
