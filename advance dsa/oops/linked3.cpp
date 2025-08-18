#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int roll = 0;
    string name = "ramjane";
    Student* next = NULL;
};
//to find roll =46
int main() {
    Student mayank, shivam, harsh, arjun;
    mayank.name = "mayank panday";
    mayank.roll = 95;
    shivam.name = "shivam yadav";
    shivam.roll = 54;
    harsh.name = "harsh dev";
    harsh.roll = 46;
    arjun.name = "arjun khattar";
    arjun.roll = 41;

    mayank.next = &shivam;
    shivam.next = &harsh;
    harsh.next = &arjun;

    int targetRoll = 46;
    bool found = false;

    Student* head = &mayank;
    while (head != NULL) {
        if (head->roll == targetRoll) {
            found = true;
            break; // mil gaya, aage check karne ki zaroorat nahi
        }
        head = head->next;
    }

    if (found) {
        cout << "Exist" << endl;
    } else {
        cout << "Not Exist" << endl;
    }

    return 0;
}
