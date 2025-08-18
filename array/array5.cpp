#include <iostream>
using namespace std;
int main()
{

    //code that only multiply that value which is multiple of 2.
    // array declaration
    int n;
    cin>>n;
    int arr[n];
    // input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // output
    cout << "printing data" << endl;
    for (int i = 0; i < n; i++){
     if(arr[i]%2==0){
        cout << arr[i] * 2 << " ";
    }
    
    else{
        cout<<arr[i]<<" ";
    }
    }}