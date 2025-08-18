#include <bits/stdc++.h>
using namespace std;
int main(){
    int *ptr;

    ptr= new int [5]{1,2,3,4,5};
    for(int i =0;i<5;i++){
        cout<<ptr[i]<<" ";


    }
    delete ptr;
}