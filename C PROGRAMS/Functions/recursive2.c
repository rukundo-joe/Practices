#include <stdio.h>

int displayNaturalNumbers(int n);

int main() {
    int n, result;
    printf("Enter a positive number: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input, Please enter a positive number.\n");
        return 1;
    }else if(n == 0){
        printf("Invalid input, Please enter a number greater than 0.\n");
        return 1;
    }
    printf("Natural numbers between 0 and %d are: ", n);
    displayNaturalNumbers(n);
    printf("\n");

    return 0;
}

int displayNaturalNumbers(int n) {
    int result;

    if (n == 0) {
        result = printf("%d ", n);
    } else {
        displayNaturalNumbers(n - 1);
        result = printf("%d ", n);
    }

    return result;
}
