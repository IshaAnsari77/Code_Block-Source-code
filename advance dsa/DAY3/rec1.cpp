#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if (n == 0)
        return 1;

    cout<<n<<endl;
    return n * solve(n - 1);
    cout<<"hi"<<endl;
}
int main()
{
    int n = 5;
    cout << solve(n);
}