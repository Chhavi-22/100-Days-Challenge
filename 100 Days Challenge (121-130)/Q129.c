//Q129.A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0, count = 0;
    float average;

    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }


    if (count > 0)
        average = (float)sum / count;
    else
        average = 0;

    printf("Sum of numbers: %d\n", sum);
    printf("Average of numbers: %.2f\n", average);

    fclose(file);

    return 0;
}
