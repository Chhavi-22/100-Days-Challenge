//Q64 (Arrays (1D))
//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; 
    int maxCount = 0, digit, i;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            digit = i;
        }
    }

    printf("Digit %d occurs the most (%d times).\n", digit, maxCount);

    return 0;
}
