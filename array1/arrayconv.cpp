#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

    int x=90;
    float y=x;
    cout<<x<<" "<<y<<endl; 

    float arr[4]={1.2, 2.3, 3.4, 4.5};
    int index=0;
    float max=INT_MIN;
    for (int i = 0; i < 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }
    cout<<max;

}