#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;
    int roll_no;
    // string address;
    // int batch;
    // void dance(){
    //     cout<<"dancing";
    // }
    // void eating(){
    //     cout<<"eating food";
    // }
public:
    void setdata(string name, int age, int roll_no)
    {
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
    }
    void getdata()
    {
        cout << this->name << " " << this->age << " " << this->roll_no << endl;
    }
    
    void sizeage()
    {
        cout << sizeof(this->age);
    }
};

int main()
{
    student mayank;

    // mayank.name="mayank";
    // mayank.age=25;
    // mayank.roll_no=27;
    // mayank.batch=2026;
    // cout<<mayank.name;
    mayank.setdata("mayank", 19, 98);
    mayank.getdata();

    student harsh;
    harsh.setdata("harsh", 25, 89);
    harsh.getdata();

    student isha;
    isha.setdata("isha", 20, 78);
    isha.getdata();

    // student arjun;
    // cout<<sizeof(arjun);

    isha.sizeage();
}
