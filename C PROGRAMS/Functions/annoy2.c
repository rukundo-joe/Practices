#include <stdio.h>

int main() {
    int number;

    printf("Enter a number less than 100: ");
    scanf("%d", &number);

    while (number < 100) {
        if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0) {
            printf("Entered number %d satisfies the condition.\n", number);
            break;
        }

        printf("Entered number %d does not satisfy the condition. Enter another number: ", number);
        scanf("%d", &number);
    }

    printf("Program stopped.\n");

    return 0;
}
