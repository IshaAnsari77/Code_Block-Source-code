

#include <iostream>
using namespace std;

class Animal {

   public:
   string color="red";
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

class Dog : protected Animal {
 
   public:
    void bark() {
        cout << "I can't bark! Woof woof!!" << endl;
    }

    void getdata(){
        cout<<this->color<<endl;
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
    dog1.getdata();
    

    return 0;
}