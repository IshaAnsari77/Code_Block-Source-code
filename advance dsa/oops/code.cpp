#include <bits/stdc++.h>
using namespace std;
int print(int n){
    if (n==1){
       
        return n;
    }
    
    return n+print(n-1);
}
int main()
{

     cout<<print(4)<<endl;
return 0;
}