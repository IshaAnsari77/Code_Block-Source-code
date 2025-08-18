#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        int x = 0;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                x = 1;
                break;
            }
        }

        if (x == 0) {
            cout << i << endl;
        }
    }

  
}



