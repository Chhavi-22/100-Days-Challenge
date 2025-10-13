//Q85 (Strings)
//Reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    // Find length manually
    while (str[length] != '\0')
        length++;

    printf("\nReversed string: ");
    for (i = length - 1; i >= 0; i--)
        printf("%c", str[i]);

    printf("\n");
    return 0;
}
