#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (E/V/G/A/F): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'E':
            printf("Excellent\n");
            break;
        case 'V':
            printf("Very Good\n");
            break;
        case 'G':
            printf("Good\n");
            break;
        case 'A':
            printf("Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid Grade\n");
            break;
    }

    return 0;
}
