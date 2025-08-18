#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    // cout<<x+y;
    if(x>y){
     cout<<"x is greater than y";
    }
    else{
        // cout<<"x is greater than y";
        if(x==y){
            cout<<"x is equal to y";
        }
        else{
            cout<<"y is greater than x";
        }
    }

}