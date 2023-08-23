#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "The animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "The dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "The cat meows." << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->makeSound();

    animalPtr = &cat;
    animalPtr->makeSound();

    return 0;
}
