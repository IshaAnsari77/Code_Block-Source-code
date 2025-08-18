#include <iostream>
using namespace std;

int main() {
    int n;        
    int sum = 0;
    int i=0;  

   
    cout << "Enter a number: ";
    cin >> n;

    while(i<=n){
        sum = sum +i;
        i++;
       
    }

    
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
