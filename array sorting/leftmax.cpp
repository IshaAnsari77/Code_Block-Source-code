#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int left[n];
    
    left[0] = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i - 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << left[i] << " ";
    }


   
    return 0;
}