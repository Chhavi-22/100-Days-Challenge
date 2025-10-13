//Q86 (Strings)
//Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safe input

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    
    while (str[length] != '\0')
        length++;

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1; 
            break;
        }
    }

    if (flag == 0)
        printf("\nThe string is a palindrome.\n");
    else
        printf("\nThe string is not a palindrome.\n");

    return 0;
}
