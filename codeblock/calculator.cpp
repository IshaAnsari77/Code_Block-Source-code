#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    // Check operator and calculate result
    if (op == '+') {
        cout << "Result = " << num1 + num2;
    } else if (op == '-') {
        cout << "Result = " << num1 - num2;
    } else if (op == '*') {
        cout << "Result = " << num1 * num2;
    } else if (op == '/') {
        if (num2 != 0)
            cout << "Result = " << num1 / num2;
        else
            cout << "Cannot divide by zero!";
    } else {
        cout << "Invalid operator!";
    }

    return 0;
}
