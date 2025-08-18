#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

    char arr[4] = {'I', 'S', 'H', 'A'};

    for (int i = 0; i < 4; i++)
    {

        char x = arr[i] + 32;

        cout << x << " ";
    }
}
