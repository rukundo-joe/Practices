#include <stdio.h>

// Function with return type but no parameter
int getRandomNumber() {
    int num = rand() % 100; // Generate a random number between 0 and 99
    return num;
}

int main() {
    int randomNumber = getRandomNumber();
    printf("Random Number: %d\n", randomNumber);
    return 0;
}
