//Q66 (Arrays (1D))
//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, key, i;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[100]; // assuming maximum size 100
    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    int pos = n;
    for (i = n - 1; i >= 0; i--) {
        if (arr[i] > key) {
            arr[i + 1] = arr[i]; 
        } else {
            pos = i + 1; 
            break;
        }
    }

    arr[pos] = key;
    n++; 

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
