#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    int even_count = 0, odd_count = 0;

    // Array storing
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //  even and odd
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    cout << " Even Numbers: " << even_count << endl;
    cout << " Odd Numbers: " << odd_count << endl;

    return 0;
}
