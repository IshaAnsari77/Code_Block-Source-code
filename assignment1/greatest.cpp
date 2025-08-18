#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter The 1st Number :";
    cin >> a;
    cout << "Enter The 2nd Number :";
    cin >> b;
    cout << "Enter the 3rd Number :";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "A is the Greatest";
    }
    else if (b > a && b > c)
    {
        cout << "B is the Greatest";
    }
    else
    {
        cout << "C is the Greatest";
    }
}