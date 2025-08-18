#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    
   int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    int key;
    cout<<endl;
    cout<<"enter key value to find out :";
    cout<<endl;
    cin>>key;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Find";
            
        }
        else{
            cout<<"Not Found";
        }
    
       
    }
    }


