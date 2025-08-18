#include <iostream>
using namespace std;

void printIncreasing(int n)
{
    if (n == 6)
        return;
    cout << n << " ";
    printIncreasing(n + 1);
    cout <<  n<< " ";
    cout<<endl;
    
}



int main()
{
    int n=1;
    printIncreasing(n);
}
