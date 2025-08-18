#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = 0;

    for (int i = 1; i < n; i++)
    {
        if (max > arr[i])
        {
            // skip
        }
        else
        {
            max = arr[i];
        }
    }

    cout << max << " ";
}