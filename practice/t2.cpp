#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Print the 1st number :";
    cin>>a;

    int b;
    cout<<"Print the 2nd number :";
    cin>> b;
    int c;
    cout<<"Print the 3rd number :";
    cin>>c;

    if(a<b && a<c){
        cout<<a<<" is smallest";
    }
    else if(b<a && b<c){
        cout<<b<<" is smallest";
    }
    else{
        cout<<c<< "is smallest";
    }

}