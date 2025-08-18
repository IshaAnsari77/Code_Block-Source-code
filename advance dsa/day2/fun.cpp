#include <iostream>
using namespace std;

void printIncreasing(int n) {
    if (n > 101) return;        
    cout << "hi"<< " ";           
    printIncreasing(n + 1);
cout << "bye"<< " ";     }  

int main() {
    printIncreasing(1);           
    
}
