//Q87 (Strings)
//Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            ; 
        else if (str[i] != '\n') 
            special++;
        i++;
    }

    printf("\nSpaces: %d", spaces);
    printf("\nDigits: %d", digits);
    printf("\nSpecial characters: %d\n", special);

    return 0;
}
