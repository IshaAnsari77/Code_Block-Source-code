#include <bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int len){
    if(len==0){
    return true;
}

if(arr[len]>=arr[len-1]){
    return sorted(arr,len-1);
}
else{
    return false;
}


}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<sorted(arr,n-1);
return 0;
}