#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    int marks[N];
    char grades[N];
    int i;
    for (i = 0; i < N; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < N; i++) {
        if (marks[i] >= 90 && marks[i] <= 100) {
            grades[i] = 'A';
        } else if (marks[i] >= 80 && marks[i] < 90) {
            grades[i] = 'B';
        } else if (marks[i] >= 70 && marks[i] < 80) {
            grades[i] = 'C';
        } else if (marks[i] >= 60 && marks[i] < 70) {
            grades[i] = 'D';
        } else if (marks[i] >= 0 && marks[i] < 60) {
            grades[i] = 'F';
        } else {
            printf("Invalid marks for student %d\n", i + 1);
            grades[i] = 'X';  // Invalid grade
        }
    }
    printf("Grades:\n");
    for (i = 0; i < N; i++) {
        printf("Student %d: %c\n", i + 1, grades[i]);
    }

    return 0;
}







