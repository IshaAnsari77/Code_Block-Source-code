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

    int mult = 1;

    for (int i = 0; i < n; i++)
    {
        mult = mult * arr[i];
    }

    cout << "Output: " << mult << endl;

    return 0;
}
