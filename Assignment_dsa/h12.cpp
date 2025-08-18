#include <iostream>
using namespace std;

int check(string s, int i, int j) {
    if (i >= j)
        return 1;
    if (s[i] != s[j])
        return 0;
    return check(s, i + 1, j - 1);
}

int main() {
    string s;
    cin >> s;

    if (check(s, 0, s.length() - 1))
        cout << "palindrome";
    else
        cout << "not palindrome";

    return 0;
}
