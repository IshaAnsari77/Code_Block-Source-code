#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0)
        return 1;  // base case

    return a * power(a, b - 1);  // recursive func
}

int main() {
    int a = 2, b = 3;
    cout  << power(a, b) << endl;
    return 0;
}
