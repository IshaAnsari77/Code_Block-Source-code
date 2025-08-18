#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int freq = 0;

    int arr[n];
    cout << "key :";
    int key;
    cin >> key;

    // Array storing
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            freq++;
        }
        else
        {
        }
    }

    cout << "frequency of" << key << freq << endl;

    return 0;
}
