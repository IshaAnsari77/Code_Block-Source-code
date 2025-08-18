#include <iostream>
using namespace std;

int main() {
    //code for print max value and index of max value
    int n;
    cin >> n; 

    int arr[n];
    int index=0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = 0; 

   
    for (int i = 1; i < n; i++) {
        if (max > arr[i]) {
            //skip kro
        }
        else{
            max=arr[i];
           index=i;
        }
        index=max;
        arr[index]=0;
    }
   

    cout << max<<" " <<index;
    
}