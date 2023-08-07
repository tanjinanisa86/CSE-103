#include <stdio.h>

int main() {
    int n;

    printf("Please enter a number: ");
    scanf("%d", &n);

    while (n < 0) {
        printf("Please enter a positive number: ");
        scanf("%d", &n);
    }

    printf("You entered a positive number: %d\n", n);

    return 0;
}
