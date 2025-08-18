#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    bool x = true;
    while (i <= 100)
    {
        if (i % 5 == 0)
        {
            cout << i << endl;
            x = false;
        }

        i = i + 200;
    }
}