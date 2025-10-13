//Q91 (Strings)
//Remove all vowels from a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);  
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeVowels(char str[]) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {   // If not a vowel, keep it
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    removeVowels(str);

    printf("String after removing vowels: %s\n", str);

    return 0;
}
