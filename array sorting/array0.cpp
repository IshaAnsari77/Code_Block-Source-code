#include <iostream>
using namespace std;
int main()
{
    //storing
    int n;
    cout << "Tell the size of array :";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    
    for (int i = 0; i < n; i++)
    {
       
        cout << arr[i]*arr[i] << " ";
    }
    cout << endl;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
       
        sum=sum+arr[i];
      
    }
    cout<<sum<<" ";
    cout << endl;
    //for reverse the array
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}