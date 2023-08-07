#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (count < n) {
        printf("The sky is the limit\n");
        count++;
    }

    return 0;
}
