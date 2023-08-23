#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    // Input ten numbers
    cout << "Enter ten numbers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Displaying the numbers and their squares
    cout << "\nNumbers and their squares:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " - " << numbers[i] * numbers[i] << "\n";
    }

    return 0;
}
