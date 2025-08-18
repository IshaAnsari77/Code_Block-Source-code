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
    // process first index
    int key;
    cin >> key;
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {

            index = i;
            break;
        }
    }
    cout << index;
}