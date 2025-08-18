#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    if (n < 2) {
        cout << "Not a prime number" << endl;
    } else if (n == 2) {
        cout << "Prime number" << endl;
    } else {
        if (n % 2 == 0) {
            cout << "Not a prime number" << endl;
        } else {
            int x = 0;
            for (int i = 3; i <= n / 2; i = i + 2) {
                if (n % i == 0) {
                    cout << "Not a prime number" << endl;
                    x++;
                    break;
                }
            }
            if (x == 0) {
                cout << "Prime number" << endl;
            }
        }
    }

    return 0;
}
