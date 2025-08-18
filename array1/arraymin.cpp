#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // code for print min value and index of min value
    int n;
    cin >> n;
    int arr[n];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    int min = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (min < arr[i])
        {
            // skip kro
        }
        else
        {
            min = arr[i];
            index = i;
        }
    }

    arr[index] = INT_MAX; // first min will be now +20124567 something
    min = arr[0];
    index = 0;
    for (int i = 1; i < n; i++)
    {
        if (min < arr[i])
        {
            // skip kro
        }
        else
        {
            min = arr[i];
            index = i;
        }
    }


   
 
    cout << min << " " ;
}