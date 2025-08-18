#include <iostream>
using namespace std;

void printReverseDigits(int n) {
    if (n == 0) return;

    cout << n % 10 << " ";
    printReverseDigits(n / 10);
}

int main() {
    int n = 564;
    printReverseDigits(n);
    return 0;
}
