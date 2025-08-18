#include <iostream>
using namespace std;
int main()
{

    //code that only multiply that value which is multiple of 2.
    // array declaration
    int n;
    cin>>n;
    int arr[n];
    cout << "printing data" << endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
     if(arr[i]%2==0){
        cout << "0" << " ";
    }
    
    else{
        cout<<"1"<<" ";
    }
    }
   }