// class Solution {
// public:

    
//     int solve(int n){
//          if (n <= 1)
//         return n;

//     vector<int> dp(n + 1);

//     dp[0] = 0;
//     dp[1] = 1;

//     for (int i = 2; i <= n; ++i){

//         dp[i] = dp[i - 1] + dp[i - 2];
//     }

//     return dp[n];
//     }


//     int fib(int n) {
//         int result= solve(n);
//         return result;

        
//     }
// };
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q
;
q.push(12);
q.push(32);
q.push(17);

while(!q.empty()){
    cout << q.front() << " ";
        q.pop();
}
return 0;
}