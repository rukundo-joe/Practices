#include <iostream>
using namespace std;

int main() {
    int age = 25;
    double height = 1.75;
    char grade = 'A';
    bool isStudent = true;
    string name = "John Doe";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " meters" << endl;
    cout << "Grade: " << grade << endl;

    // if(isStudent == 1){
    //     cout << "Yes" << endl;
    // }else{
    //     cout << "No" << endl;
    // }

    cout << "Is student? " << (isStudent ? "Yes" : "No") << endl;

    return 0;
}
