#include <iostream>
using namespace std;

void hanoi(int n, char from, char to, char aux) {
    if (n == 0)
        return;

    // Move n-1 disks from source to auxiliary
    hanoi(n - 1, from, aux, to);

    // Move remaining disk to destination
    cout << "Move disk " << n << " from " << from << " to " << to << endl;

    // Move n-1 disks from auxiliary to destination
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    hanoi(n, 'A', 'C', 'B');
    return 0;
}
