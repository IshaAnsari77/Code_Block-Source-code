#include <iostream>
using namespace std;
int main()
{ // bubble sort
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int round = 0; round < n - 1; round++)
    {
        // opertaions t each time max value
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap arr[j],arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // second largest element
    int second = arr[n - 2];
    cout << second;
}