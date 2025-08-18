#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&nums){
    set<int>st;

    for(auto i:nums){
        st.insert(i);
    }
    return st.size();
}
int main(){
   
   int nums={1,2,3};
   return solve;
}