#include <stdio.h>

int main() {
    int number;

    while (1) { // This is an infinite loop
        printf("Enter a number less than 100: ");
        scanf("%d", &number);

        if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0) {
            break;
        }
    }

    printf("Program stopped.\n");

    return 0;
}

//The number that would stop the program is a number that is both a multiple of 3, 5, and 7. In other words, it needs to be divisible by 3, 5, and 7 without any remainder.

//The smallest number that satisfies this condition is the least common multiple (LCM) of 3, 5, and 7. The LCM of 3, 5, and 7 is 105. Therefore, if the user enters the number 105, the program will stop because it is a multiple of 3, 5, and 7.

//Note that any multiple of 105 (e.g., 210, 315, 420, etc.) would also stop the program, as they are all divisible by 3, 5, and 7.
