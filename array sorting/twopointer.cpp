#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={0,1,1,1,1,0,1,0,0,0};
   // int arr[5]={0,0,0,0,0};
   int n=10; 
   int l=0;
    int r=n-1;
    while(l<r){
        //l will increase 
        while(arr[l]==0 && l<r){
            l++;
        }
         //r will decrease
        while(arr[r]==1&& l<r){
            r--;
        }
      //swap
      if(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
      }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}