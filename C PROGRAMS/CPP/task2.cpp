#include <iostream>
using namespace std;

int main() {
    int number;

    // Input a number
    cout << "Enter a number: ";
    cin >> number;

    // Calculate the cube
    int cube = number * number * number;

    // Display the cube
    cout << "The cube of " << number << " is: " << cube << endl;

    return 0;
}
