#include <iostream>
using namespace std;

void printDigits(int n) {
    if (n == 0) {
        return;
    }

   
    printDigits(n / 10);

    //cout<<n<<endl;
    cout << n % 10 << endl;
}

int main() {
    int n = 564;
    printDigits(n);
    
}
