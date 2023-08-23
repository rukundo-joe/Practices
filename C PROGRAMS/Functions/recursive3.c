#include <stdio.h>

void displayNaturalNumbers(int n);

int main() {
    int n;
    printf("Enter a positive number: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }
    printf("Natural numbers between %d and 0 are: ", n);
    displayNaturalNumbers(n);
    printf("\n");

    return 0;
}

void displayNaturalNumbers(int n) {
    if (n == 0) {
        printf("%d ", n);
    } else {
        displayNaturalNumbers(n - 1);
        printf("%d ", n);
    }
}
