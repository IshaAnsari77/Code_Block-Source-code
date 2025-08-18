#include <iostream>
using namespace std;
class country {
    public:
    void show(){
        cout<<"base class show"<<endl;
    }
};
class state: public country{
    public:
    void show(){
        cout<<" derived class show"<<endl;
    }
};
int main(){
state punjab;
punjab.show();
}