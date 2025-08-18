#include <bits/stdc++.h>
using namespace std;

int main(){
   string str="geeksforgeek";
   vector<int>v(26,0);
   for(auto i: str){
    v[i-'a']++;
   }
   for(int  i=0;i<v.size();i++){
    if(v[i]>0){
        char ch='a'+i;
        cout<<ch<<" "<<v[i]<<endl;
    }
   }
}