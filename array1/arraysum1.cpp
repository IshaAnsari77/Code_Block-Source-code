#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sub = 0;
    //print sum of all but leave it self sum after the index(i+1)
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        int sum = 0;

        for (int j = i + 1; j < n; j++)
        {
            sum = sum + arr[j];
        }
        cout << sum <<" ";
    }
   
}