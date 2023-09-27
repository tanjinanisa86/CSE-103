#include <stdio.h>

int main() {
    int N,i;

    printf("Enter the number of elements (N) in the array: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Invalid input. Number of elements must be positive.\n");
        return 1; 
    }

    int arr[N];
    printf("Enter %d elements for the array:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
 
    int firstElement = arr[0];
    for (i = 0; i < N - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[N - 1] = firstElement;

    printf("Array after shifting all elements one place to the left:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
