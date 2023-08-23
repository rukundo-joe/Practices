#include <iostream>
using namespace std;

int main() {
    int number;
    char choice;

    // Input numbers and display their squares
    do {
        // Input a number
        //std::cout << "Enter a number: "; std:: is added to these cin, cout, endl functions when we didn't include namespace std in the header section (using namespace std;)
        cout << "Enter a number: ";
        cin >> number;

        // Display the number and its square
        cout << "Number: " << number << " - Square: " << number * number << "\n";

        // Ask the user if they want to continue
        cout << "Do you want to enter another number? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
