#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Number of elements must be positive.\n");
        return 1;
    }
    int arr[n];
    int i;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The minimum element in the array is: %d\n", min);
    return 0;
}
