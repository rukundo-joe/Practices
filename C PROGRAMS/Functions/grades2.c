#include <stdio.h>

int main() {
    int grade;

    printf("Enter the grade: ");
    scanf("%d", &grade);

    switch (grade) {
        case 75 ... 100:
            printf("O - Outstanding\n");
            break;
        case 60 ... 74:
            printf("A - Excellent\n");
            break;
        case 50 ... 59:
            printf("B - Good\n");
            break;
        case 40 ... 49:
            printf("C - Average\n");
            break;
        case 0 ... 39:
            printf("D - Fail\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }

    return 0;
}
