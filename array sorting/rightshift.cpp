#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int ans[n];


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=k%n;
    int flag=0;
    for(int i=n-k;i<n;i++){
        ans[flag]=arr[i];
        flag++;
    }
    for(int i=0;i<n-k;i++){
     ans[flag]=arr[i];
     flag++;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
       }
    
    return 0;
}