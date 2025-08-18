#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sum(n / 10);
    cout<<sum<<endl;
}

int main() {
    int n = 564;
    cout << sum(n);
    return 0;
}
