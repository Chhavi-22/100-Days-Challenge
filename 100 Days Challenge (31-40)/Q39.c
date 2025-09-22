//Q39 (Loops without Arrays/Strings)
//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, remainder, product = 1;
    int hasOdd = 0; 

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 

    while (num != 0) {
        remainder = num % 10;   
        if (remainder % 2 != 0) { 
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10; 
    }

    if (hasOdd) {
        printf("Product of odd digits of %d = %d\n", original, product);
    } else {
        printf("No odd digits found in %d\n", original);
    }

    return 0;
}
