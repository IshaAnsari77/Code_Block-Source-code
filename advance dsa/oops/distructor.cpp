#include <bits/stdc++.h>
using namespace std;
class demo{
public:
string name="vikas";
demo(){
    cout<<"constructor called\n";
}
~demo(){
    cout<<"destructor called\n";
}
};
int main(){
 demo ankita;
 cout<<ankita.name<<endl;
//  int a=5;
//  cout<<a<<endl;
demo* shivam=new demo;
delete shivam;
//cout<<shivam->name<<endl;
}