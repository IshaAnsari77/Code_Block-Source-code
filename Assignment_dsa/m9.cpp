#include <iostream>
using namespace std;

void reverse(int len, string name) {
if (len < 0) {
        return;
    }
    cout << name[len];  
    reverse(len - 1, name);  
}

int main() {
    string name = "harsh";
    reverse(name.length() - 1, name);
    return 0;
}
