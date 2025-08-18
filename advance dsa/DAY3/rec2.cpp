#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==1)
    return 1;
    

    cout<<n<<endl;
    cout<<"bye"<<endl;
    return n*solve(n-1);
    cout<<n<<endl;
    cout<<"hi"<<endl;  //dummy line of code
}
int main()
{
    int n = 5;
    cout << solve(n);
}