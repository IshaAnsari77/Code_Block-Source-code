#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

   char arr[5]={'A', 'B', 'C', 'D', 'E'};

   
    for (int i = 0; i < 5; i++)
    {
       
        
            cout<<arr[i]<<" ";
            int x=arr[i];
            cout<<x<<" ";
            arr[0]=+32;
            cout<<arr[0];
        

    }
  

}