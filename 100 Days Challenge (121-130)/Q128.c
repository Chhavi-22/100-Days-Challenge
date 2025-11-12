//Q128.Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h> 

int main() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch);  
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    fclose(file);

    return 0;
}
