#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr2[n];
    int arr[n];

    // Array storing
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }

    cout << "Copied Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}
