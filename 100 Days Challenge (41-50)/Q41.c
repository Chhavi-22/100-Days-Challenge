//Q41 (Loops without Arrays/Strings)
//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 

    digits = (int)log10(num) + 1;

    firstDigit = num / (int)pow(10, digits - 1);
    lastDigit = num % 10;

    if (digits == 1) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    int middle = num % (int)pow(10, digits - 1); // remove first digit
    middle = middle / 10;                        // remove last digit

    swappedNum = lastDigit * (int)pow(10, digits - 1) + middle * 10 + firstDigit;

    printf("Original number: %d\n", original);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
