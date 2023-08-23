#include <stdio.h>

// Function with return type and parameter
int addNumbers(int a, int b);

int main() {
    int num1 = 5, num2 = 10;
    int result = addNumbers(num1, num2);
    printf("The sum is: %d\n", result);
    return 0;
}

int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}
