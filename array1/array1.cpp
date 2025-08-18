#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //code for print total number which is divisible by 4
    int arr[n];
    int positive_count = 0, negative_count = 0;
    
    // Array storing
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    //  even and odd
    for (int i = 0; i < n; i++) {
        if (arr[i] % 4 == 0) {
        negative_count++;
        } else {
            positive_count++;
        }
    }
    
    
    cout << " divisible of 4: " << positive_count << endl;
    

    return 0;
}
