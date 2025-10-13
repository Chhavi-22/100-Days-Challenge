//Q83 (Strings)
//Count vowels and consonants in a string
#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safe input

    while (str[i] != '\0') {
        ch = tolower(str[i]); 

        if (ch >= 'a' && ch <= 'z') { // check if it’s a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("\nNumber of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
