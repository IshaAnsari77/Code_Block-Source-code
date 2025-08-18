#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // code for print max value and index of max value
    int n;
    cin >> n;
    int arr[n];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    int max = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (max > arr[i])
        {
            // skip kro
        }
        else
        {
            max = arr[i];
        }
    }

    arr[index] = 0;
   // max = arr[0];
    //index = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < max)
        {
            // skip kro
        }
        else
        {
            max = arr[i];
            index = i;
        }
    }

    cout << max << " " ;
}