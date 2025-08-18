#include <iostream>
using namespace std;

int main()
{
    int n = 9;
    int x = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "not a prime no." << endl;
            x = 1;
            break;
        }
    }
    if (x == 0)
    {
        cout << " prime no." << endl;
    }
}