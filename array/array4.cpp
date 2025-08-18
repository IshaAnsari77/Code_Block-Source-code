#include <iostream>
using namespace std;
int main()
{
    //code for multiply each array value with 2
    // array declaration
    int n;
    cin>>n;
    int arr[n];
    // input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // output
    cout << "printing squares" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] * 2 << " ";
    }
}