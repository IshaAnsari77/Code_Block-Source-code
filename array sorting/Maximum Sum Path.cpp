#include <iostream>
#include <vector>
using namespace std;

int maxPathSum(vector<int>& arr1, vector<int>& arr2) {
    int i = 0, j = 0;
    int sum1 = 0, sum2 = 0, ans = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            sum1 += arr1[i++];
        } else if (arr1[i] > arr2[j]) {
            sum2 += arr2[j++];
        } else {
            ans += max(sum1, sum2) + arr1[i]; // common element
            i++;
            j++;
            sum1 = 0;
            sum2 = 0;
        }
    }

    while (i < arr1.size()) sum1 += arr1[i++];
    while (j < arr2.size()) sum2 += arr2[j++];

    ans += max(sum1, sum2);
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> arr1(n), arr2(m);

        for (int i = 0; i < n; i++) cin >> arr1[i];
        for (int i = 0; i < m; i++) cin >> arr2[i];

        cout << maxPathSum(arr1, arr2) << endl;
    }

    return 0;
}
