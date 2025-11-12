//Q124.Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *srcFile, *destFile;
    char srcName[50], destName[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", srcName);

    printf("Enter destination filename: ");
    scanf("%s", destName);

    srcFile = fopen(srcName, "r");
    if (srcFile == NULL) {
        printf("Error! Cannot open source file.\n");
        return 1;
    }
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Error! Cannot create destination file.\n");
        fclose(srcFile);
        return 1;
    }
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from %s to %s\n", srcName, destName);

    fclose(srcFile);
    fclose(destFile);

    return 0;
}
