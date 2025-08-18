#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

    char arr[4] = {'I', 's', 'H', 'a'};

    for (int i = 0; i < 4; i++){
    if(arr[i]>96)
    {

        arr[i] = arr[i] - 32;

        
    }
    
   
    cout << arr[i]<< " ";
    
}
    
}
