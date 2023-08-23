#include <stdio.h>

// Function with no return type but with parameter
void printMessage(char message[]) {
    printf("Message: %s\n", message);
}

int main() {
    char myMessage[] = "Hello, World!";
    printMessage(myMessage);
    return 0;
}
