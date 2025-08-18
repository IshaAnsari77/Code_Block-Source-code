#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int roll = 0;
    string name = "ramjane";
    Node* next = NULL;
};

int main() {
    Node one, two, three, four;
    one.name = "one panday"; one.roll = 95;
    two.name = "two yadav"; two.roll = 54;
    three.name = "three dev"; three.roll = 46;
    four.name = "four khattar"; four.roll = 41;

    one.next = &two;
    two.next = &three;
    three.next = &four;
    four.next = NULL;

    // New node banate hain
    Node five;
    five.name = "five singh";
    five.roll = 100;

    // Insert at start
    Node* head = &one; // current head
    five.next = head;  // five ke next me purani list
    head = &five;      // head update to five

    // Print full list after insertion at start
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->name << " " << temp->roll << endl;
        temp = temp->next;
    }

    return 0;
}
