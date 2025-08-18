#include <iostream>
using namespace std;

int solve(int n) {
    if (n == 0 || n == 1)
        return 1;

    return solve(n - 1) + solve(n - 2);
}

int main() {
    int n;
    n=6;

    cout <<solve(n) << endl;
    return 0;
}
