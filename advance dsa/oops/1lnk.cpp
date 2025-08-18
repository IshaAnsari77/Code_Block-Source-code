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
    five.next = NULL;

    // Head pointer set
    Node* head = &one;

    // Traverse list until last node
    Node* temp = head;
    while (temp != NULL) {
        if (temp->next == NULL) { // last node
            temp->next = &five;  // connect five
            break;
        }
        temp = temp->next;
    }

    // Print full list after insertion
    head = &one;
    while (head != NULL) {
        cout << head->name << " " << head->roll << endl;
        head = head->next;
    }

    return 0;
}
