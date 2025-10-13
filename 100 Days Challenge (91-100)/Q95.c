//Q95 (Strings)
//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2))
        return 0;

    char temp[2000];
    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[1000], str2[1000];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (isRotation(str1, str2))
        printf("Yes, \"%s\" is a rotation of \"%s\".\n", str2, str1);
    else
        printf("No, \"%s\" is NOT a rotation of \"%s\".\n", str2, str1);

    return 0;
}
