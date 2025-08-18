#include <iostream>
using namespace std;
int main()
{
int n;

cin>>n;
//method 1
// for(int i=0; i<=n; i++){
//      int summ=n*n/2;
//     cout<<summ;
// } 


//store natural no upto in array
int arr[n+1];
for(int i=0; i<=n; i++){

    arr[i]=i;
} 
int sum=0;
for(int i =0; i<=n; i++){

sum= sum+i;
}
cout<<sum<<" ";
return 0;
}