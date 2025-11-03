//Q119.Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  
    
    int arr[n];
    int xor_all = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xor_all ^= arr[i];  
    }

    for (int i = 1; i < n; i++) {
        xor_all ^= i;
    }

    printf("%d\n", xor_all); 
    return 0;
}

