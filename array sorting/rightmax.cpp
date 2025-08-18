#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int right[n];
    
    right[n-1] = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i =n-2; i >= 0; i--)
    {
        right[i] = max(right[i+1], arr[i+1]);
    }
    for (int i = 0; i <n; i++)
    {
        cout << right[i] << " ";
    }


   
    return 0;
}