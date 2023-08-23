#include <stdio.h>

int main() {
    int grade;

    printf("Enter the grade: ");
    scanf("%d", &grade);

    if (grade > 75) {
        printf("O - Outstanding\n");
    } else if (grade >= 60 && grade <= 75) {
        printf("A - Excellent\n");
    } else if (grade >= 50 && grade < 60) {
        printf("B - Good\n");
    } else if (grade >= 40 && grade < 50) {
        printf("C - Average\n");
    } else if (grade < 40) {
        printf("D - Fail\n");
    } else {
        printf("Invalid grade\n");
    }

    return 0;
}
