#include <stdio.h>

int main() {
    // Ternary Operator
    int a = 10, b = 20;
    int max = (a > b) ? a : b;
    printf("The maximum of %d and %d is %d\n", a, b, max);

    // Comma Operator
    int x = (a = 1, a + b);
    printf("The value of x is %d\n", x);

    // Bitwise Operators
    int num1 = 15; // Binary: 00001111
    int num2 = 7;  // Binary: 00000111

    int result_and = num1 & num2; // Bitwise AND
    int result_or = num1 | num2;  // Bitwise OR
    int result_xor = num1 ^ num2; // Bitwise XOR
    int result_complement = ~num1; // Bitwise NOT (1's complement)

    printf("AND result: %d\n", result_and); // Output: 7 (Binary: 00000111)
    printf("OR result: %d\n", result_or);   // Output: 15 (Binary: 00001111)
    printf("XOR result: %d\n", result_xor); // Output: 8 (Binary: 00001000)
    printf("Complement result: %d\n", result_complement); // Output: -16 (Binary: 11110000)

    // Sizeof Operator
    int arr[] = {1, 2, 3, 4, 5};
    size_t size_of_arr = sizeof(arr);
    printf("Size of arr: %zu bytes\n", size_of_arr);

    return 0;
}
