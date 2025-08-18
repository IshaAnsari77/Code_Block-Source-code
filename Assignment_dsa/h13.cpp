#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int index, vector<int>& ans) {
    if (index == n) {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }

    // Include element
    ans.push_back(arr[index]);
    solve(arr, n, index + 1, ans);

    // Exclude element (Backtrack)
    ans.pop_back();  // undo karna
    solve(arr, n, index + 1, ans);
}

int main() {
    int arr[3] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;

    solve(arr, n, 0, ans);
    return 0;
}
