#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    cout<<"bye"<<endl;
   // return n*fact(n-1);
   return fact(n-1);
    cout<<"Hi"<<endl;

}
int main()
{
    int n=5;
    
    cout<<fact(n)<<endl;
return 0;
}