#include <iostream>
using namespace std;
int main(){
    int p,r,t;
    //p=principal amount;
    //r= rate of interest;
    //t=time;

    cout<<"Enter the Principal amount :";
    cin>>p;
    cout<<"Enter The rate of interest :";
    cin>>r;
    cout<<"Enter the Time :";
    cin>>t;

    int si=p*r*t/100;
    cout<<si<<endl;
}
