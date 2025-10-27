#include <stdio.h>

int main() {
    int n, i;
    float marks[100], sum = 0, average;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    average = sum / n;

    printf("\nAverage marks of %d students = %.2f\n", n, average);

    return 0;
}
