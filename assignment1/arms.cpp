#include <iostream>
using namespace std;
int main(){
    int n,old,num,sum=0;
    cout<<"Enter The Number"<<endl;
    cin>>n;
    old=n;
    while(n>0){
        num=n%10;
        sum=sum+num*num*num;
        n=n/10;


    }
    if(old==sum){
        cout<<"armstorng number:<<endl";

    }
    else{
        cout<<"Not a armstrong Number"<<endl;
    }
}