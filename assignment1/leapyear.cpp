#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a Year :";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "The Give year is a leap year";
    }
    else
    {
        cout << "The Given year is not a leap year";
    }
}