#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter The Number :";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "The given number is even" << endl;
    }
    else
    {
        cout << "The given number is odd" << endl;
    }
}