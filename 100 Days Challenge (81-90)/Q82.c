//Q82 (Strings)
//Print each character of a string on a new line.
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    printf("\nCharacters in the string:\n");

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != '\n') 
            printf("%c\n", str[i]);
        i++;
    }

    return 0;
}

