#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={-2,-3,0,1,-4};
    vector <int> num;
    num.push_back(10);
    num.push_back(20);
    num.push_back(30);

    for(int i=0;i<num.size();i++){

     cout<<num[i]<<" ";
    }
    num.push_back(40);
    cout<<endl;
    for(int i=0;i<num.size();i++){

        cout<<num[i]<<" ";
       }
    cout<<num.size();
    
return 0;
}