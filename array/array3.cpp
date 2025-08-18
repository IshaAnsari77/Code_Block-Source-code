#include <iostream>
using namespace std;
int main()
{
    //code to print square of each array data
    // array declaration
    int arr[6];
    // input
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    // output
    cout << "printing squares" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] * arr[i] << " ";
    }
}