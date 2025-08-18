#include <iostream>
using namespace std;
int main()
{
    // array declaration
    int arr[6];
    // input
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    // output
    cout << "printing data" << endl;
    for (int i = 1; i < 6; i++)
    {
        cout << arr[i] * 2 << " ";
    }
}