#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={-2,-3,0,1,-4};

    vector <int> num;
    for(int i=0;i<5;i++){
    if(arr[i]<0){
        num.push_back(arr[i]);
    }
}
for(int i=0;i<num.size();i++){

    cout<<num[i]<<" ";
   }
return 0;
}
