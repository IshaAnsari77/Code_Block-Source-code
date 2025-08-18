#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
//to print square and after that if its even than same no or if not then =0

for(int i= 0; i<n; i++){
    cin>>arr[i];

}
int brr[n];

for (int i = 0; i<n; i++){

    brr[i]= arr[i]*arr[i];
    
}
for(int i = 0; i<n; i++){
cout<<brr[i]<<" ";

}
cout<<endl;
for(int i =0; i<n; i++){

    if(brr[i]%2==0){

        cout<<brr[i]<<" ";
    }
    else{

        cout<<0<<" ";
    }
    
}
return 0;
}