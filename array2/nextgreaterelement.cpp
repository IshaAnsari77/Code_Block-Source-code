#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 5, 9, 8, 1, 6};
    int n = arr.size();

   
    vector<int> result(n, -1);

    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j]; 
                break; 
            }
        }
    }

   
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
