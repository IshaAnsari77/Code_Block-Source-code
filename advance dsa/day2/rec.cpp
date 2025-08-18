#include <iostream>
using namespace std;

void printIncreasing(int n)
{
    if (n == 5)
        return;
    cout << "hi" << " ";
    printIncreasing(n + 1);
    cout << "bye" << " ";
    cout << "hello" << " ";
    cout << n*n << " ";
}




int main()
{
    int n=1;
    printIncreasing(n);
}
