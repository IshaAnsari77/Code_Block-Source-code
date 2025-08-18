#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int isha[n];
    for(int i=0;i<n;i++){
        cin>>isha[i];
    }
    //int isha[4]={1,5,3,2};

    //sorting function
    sort(isha,isha+n);
    cout<<isha[1];
    
return 0;
}