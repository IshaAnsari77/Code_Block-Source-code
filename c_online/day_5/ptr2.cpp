#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int * ptr;
    ptr = &arr[3];
    cout<<* ptr<<endl;
    cout<<*ptr+1<<endl;
    cout<<*(ptr-1)<<endl;
    cout<<ptr<<endl;

    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;

    int *ptr1=&arr[0];
    int *ptr2=&arr[4];
    cout<<*ptr1-*ptr2;
return 0;
}