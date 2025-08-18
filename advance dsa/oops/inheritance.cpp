// C++ program to demonstrate inheritance

#include <iostream>
using namespace std;

// base class
class Animal {

   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : private Animal {
 
   public:
    void bark() {
        cout << "I can't bark! Woof woof!!" << endl;
    }
};

int main() {
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    // dog1.eat();
    // dog1.sleep();

    // Calling member of the derived class
    dog1.bark();
    

    return 0;
}