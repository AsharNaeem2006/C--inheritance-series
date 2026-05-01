#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }

    void sleep() {
        cout << "Animal is sleeping" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing" << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    d.eat();
    d.sleep();
    d.bark();
    cout << endl;
    c.eat();
    c.sleep();
    c.meow();

    return 0;
}
