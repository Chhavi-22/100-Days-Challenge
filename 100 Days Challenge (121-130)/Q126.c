//Q126.Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char line[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error! File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    printf("\nContents of %s:\n\n", filename);

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}

