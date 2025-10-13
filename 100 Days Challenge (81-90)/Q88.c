//Q88 (Strings)
//Replace spaces with hyphens in a string
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;
    }

    printf("\nString after replacing spaces with hyphens:\n%s", str);

    return 0;
}
