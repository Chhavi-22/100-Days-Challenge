//Q37 (Loops without Arrays/Strings)
//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, x, y, temp, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    lcm = (x * y) / hcf;

    printf("LCM of %d and %d is: %d\n", x, y, lcm);

    return 0;
}
