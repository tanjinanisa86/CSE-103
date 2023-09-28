#include <stdio.h>

int main() {
    int N,i;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    int marks[N];
    printf("Enter the marks for %d students:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &marks[i]);
    }

    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;

    for (i = 0; i < N; i++) {
        if (marks[i] >= 90 && marks[i] <= 100) {
            gradeA++;
        } else if (marks[i] >= 80 && marks[i] <= 89) {
            gradeB++;
        } else if (marks[i] >= 70 && marks[i] <= 79) {
            gradeC++;
        } else if (marks[i] >= 60 && marks[i] <= 69) {
            gradeD++;
        } else {
            gradeF++;
        }
    }
    printf("Grade A: %d\n", gradeA);
    printf("Grade B: %d\n", gradeB);
    printf("Grade C: %d\n", gradeC);
    printf("Grade D: %d\n", gradeD);
    printf("Grade F: %d\n", gradeF);

    return 0;
}
