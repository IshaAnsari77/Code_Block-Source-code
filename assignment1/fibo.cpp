#include <iostream>
using namespace std;
int main(){
    int n, first=0,second=1,i,  next;

    cout<<"Enter The number"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){ //1
        cout<<first<<endl;//0
        next=first+second;//0+1
        first=second;//1
        second=next;//1
    }
   


}