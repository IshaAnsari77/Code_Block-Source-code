#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 10;
    int temp;
    temp = a;
    b = temp;
    a = b;
    
    cout << a<<endl;
    cout << b;

    return 0;
}