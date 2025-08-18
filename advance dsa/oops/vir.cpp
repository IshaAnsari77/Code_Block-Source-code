#include <iostream>
using namespace std;
class country {
    public:
    virtual void show(){
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

state* haryana =new state();
haryana->show();

country india;
india.show();

delete haryana;
}