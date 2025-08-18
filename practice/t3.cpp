#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Print the 1st number :";
    cin >> a;

    int b;
    cout << "Print the 2nd number :";
    cin >> b;

    if (a > b)
    {
        cout << a << " is greatest";
    }
    else if (a == b)
    {
        cout << a << " is equal to " << b;
    }

    else
    {
        cout << b << " is greatest";
    }
}