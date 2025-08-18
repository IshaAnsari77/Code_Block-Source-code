#include <iostream>
using namespace std;

void subsetSum(int arr[], int n, int index, int sum) {
    if (index == n) {
        cout << sum << endl;
        return;
    }

    
    subsetSum(arr, n, index + 1, sum + arr[index]);

   
    subsetSum(arr, n, index + 1, sum);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = 3;
    subsetSum(arr, n, 0, 0);
    return 0;
}
