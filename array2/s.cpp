#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];  // Declare array of size n

    // Fill array with squares
    for (int i = 0; i < n; i++) {
        arr[i] = i * i;
    }

    // Sort the array
    sort(arr, arr + n);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nHello World!";

    return 0;
}
