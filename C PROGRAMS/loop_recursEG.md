Example: Computing Factorial
Factorial is a classic example that can be solved using both loops and recursive functions.

a) Using a Loop (for loop):

#include <iostream>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int fact = factorial(num);
    std::cout << "Factorial of " << num << " is: " << fact << std::endl;

    return 0;
}

or

#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int fact = factorial(num);
    printf("Factorial of %d is: %d\n", num, fact);

    return 0;
}


b) Using a Recursive Function:

#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int fact = factorial(num);
    std::cout << "Factorial of " << num << " is: " << fact << std::endl;

    return 0;
}

or

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int fact = factorial(num);
    printf("Factorial of %d is: %d\n", num, fact);

    return 0;
}


In both cases, the factorial of a number n is calculated. The loop version uses a for loop to iterate from 1 to n and multiply the numbers to compute the factorial. The recursive version defines a base case (when n is 0 or 1) and calls itself with a smaller input until the base case is reached.

Example: Fibonacci Sequence
The Fibonacci sequence is another common example to understand recursion.

a) Using a Loop (for loop):

#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int prev = 0;
    int curr = 1;
    int next;

    for (int i = 2; i <= n; ++i) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int fib = fibonacci(num);
    std::cout << "Fibonacci number at position " << num << " is: " << fib << std::endl;

    return 0;
}

or

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int prev = 0;
    int curr = 1;
    int next;

    for (int i = 2; i <= n; ++i) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int fib = fibonacci(num);
    printf("Fibonacci number at position %d is: %d\n", num, fib);

    return 0;
}


b) Using a Recursive Function:

#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int fib = fibonacci(num);
    std::cout << "Fibonacci number at position " << num << " is: " << fib << std::endl;

    return 0;
}

or

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int fib = fibonacci(num);
    printf("Fibonacci number at position %d is: %d\n", num, fib);

    return 0;
}


In both cases, the program calculates the Fibonacci number at a given position n. The loop version iteratively computes the Fibonacci sequence by summing the previous two numbers. The recursive version defines a base case (when n is 0 or 1) and calls itself with smaller inputs (n-1 and n-2) until the base case is reached.

By comparing the code, you can see how the recursive version reflects the problem's recursive nature more closely, while the loop version provides an iterative solution.

These examples highlight how loops and recursive functions can be used to solve problems, showcasing their similarities and differences in implementation.
