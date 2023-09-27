#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of students: ");
    scanf("%d", &N);

    int marks[N];

    // Input marks for each student
    printf("Enter marks for %d students:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Initialize variables to store highest and lowest marks
    int highest = marks[0];
    int lowest = marks[0];

    // Find the highest and lowest marks
    for (int i = 1; i < N; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    // Display the highest and lowest marks
    printf("Highest mark: %d\n", highest);
    printf("Lowest mark: %d\n", lowest);

    return 0;
}
