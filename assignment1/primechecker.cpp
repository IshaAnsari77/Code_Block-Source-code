#include <iostream>
using namespace std;

int main(){
 int n; 
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n<2){
        cout<<"Not a prime Number"<<endl;
        
    }
    else{
        if(n==2){
            cout<<"Prime Number"<<endl;
        }
    }
     int x=0;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "Not a prime number" << endl;
                x = 1;
                break;
            }
        }
        if (x == 0)
        {
            cout << "prime no" << endl;
        }
    }
