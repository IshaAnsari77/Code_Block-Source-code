#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<pair<int,string>>v;
   v.push_back({32,"Mayank"});
   v.push_back({12,"Arjun"});
 v.push_back({72,"Ankita"});
  v.push_back({78,"Harsh"});
   for(auto i:v){
    cout<<i.first<<" "<<i.second<<endl;
   }
}