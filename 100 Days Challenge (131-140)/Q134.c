
//Q134.Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingl.
#include <stdio.h>

int main() {
    enum Status {SUCCESS, FAILURE, TIMEOUT};
    enum Status result;

    result = SUCCESS;  
    switch(result) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;

        case FAILURE:
            printf("Operation failed.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
    }

    return 0;
}

