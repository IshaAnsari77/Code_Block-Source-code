#include <bits/stdc++.h>
using namespace std;
struct student{
    int roll;
    string name;
    string address="uk";
};
int main()
{
student mayank;
mayank.name="mayank paandey";
mayank.roll=95;
cout<<mayank.roll<<endl;
cout<<mayank.address;


student isha;

student *ptr;
student *mptr;
ptr=&isha;
mptr=&mayank;
cout<<&isha<<" "<<ptr<<endl;
cout<<&mayank<<" " <<mptr<<endl;
return 0;
}