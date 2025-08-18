#include <iostream>
using namespace std;
int main()
{
    float x, y;
    char op;

    cout << "Enter the First Num:";
    cin >> x;
    cout << "Enter the operator:";
    cin >> op;

    cout << "Enter the Second Num:";
    cin >> y;
  
    if (op == '+')
    {
        cout <<"output :"<< x + y << endl;
    }
    else if (op == '-')
    {
        cout <<"output :"<< x - y << endl;
    }
    else if (op == '*')
    {
        cout <<"output :"<< x * y << endl;
    }
    else if (op == '/')
    {
        cout <<"output :"<< x / y << endl;
    }
   
}
