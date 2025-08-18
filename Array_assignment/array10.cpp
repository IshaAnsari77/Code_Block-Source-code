#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    int positive_count = 0, negative_count = 0;

    // Array storing
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //  even and odd
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negative_count++;
        }
        else
        {
            positive_count++;
        }
    }

    cout << " positive Numbers: " << positive_count << endl;
    cout << " negative Numbers: " << negative_count << endl;

    return 0;
}
