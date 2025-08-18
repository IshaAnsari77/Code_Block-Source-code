#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6]={0,1,1,0,1,0};
    int cnt1=0;
    int cnt2=0;

    for (int i=0;i<6;i++){
        if(arr[i]==0)
        cnt1++;
        else
        cnt2++;
    }

    for(int i =0;i<cnt1;i++){
        arr[i]=0;
    }
    for(int i=cnt1;i<6;i++){
        arr[i]=1;
    }

    for(int i=0;i<6;i++){
       cout<<arr[i]<<" ";
    }


    // while(cnt1!=0){
    //     cout<<0<<" ";
    //     cnt1--;
    // }
    // while(cnt2!=1){
    //     cout<<1<<" ";
    //     cnt2--;
    // }
    
   
return 0;
}