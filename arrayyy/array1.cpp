#include <iostream>
using namespace std;
int main()
{

    
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