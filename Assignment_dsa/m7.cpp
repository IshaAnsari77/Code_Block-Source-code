#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int len)
{
    if (len == 0)
    {
        cout << arr[0] << " ";
        return;
    }
    print(arr, len - 1);
    cout << arr[len] << " ";
}

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    print(arr, n - 1);
    return 0;
}