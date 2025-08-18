#include<iostream>
using namespace std;
int  main(){
    int n;
    cin>>n;
    int arr[n];
    int sub = 0;
    //will sum all and after that gona minus values of array[i] from sum
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i =0; i<n; i++){
        sum = sum + arr[i];
    }
    
    for(int i = 0; i<=n-1; i++){
        sub = sum - arr[i];
        sum = sub;
        cout<<sub<<" ";
    }
}