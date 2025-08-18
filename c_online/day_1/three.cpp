#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    
    
    cin >> a >> b >> c;

    
    int lar;
    if (a >= b && a >= c) {
        lar = a;
    } else if (b >= a && b >= c) {
        lar = b;
    } else {
        lar = c;
    }

    
    cout << "The largest number is: " << lar << endl;

    return 0;
}
