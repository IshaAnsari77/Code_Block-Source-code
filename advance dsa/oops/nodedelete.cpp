#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int roll = 0;
    string name = "ramjane";
    Node *next = NULL;
};
void display(Node *travarse)
{
    while (travarse != NULL)
    {
        cout << travarse->name << " " << travarse->roll << endl;
        travarse = travarse->next;
    }
}

int main()
{
    Node one, two, three, four;
    one.name = "one panday";
    one.roll = 95;
    two.name = "two yadav";
    two.roll = 54;
    three.name = "three dev";
    three.roll = 46;
    four.name = "four khattar";
    four.roll = 41;

    one.next = &two;
    two.next = &three;
    three.next = &four;

    Node *head=&one;
    int count=1;
    while(count<2){
        head=head->next;
        count++;
    }
    // cout<<head->name;
    Node *temp;
    temp=head;
    head=head->next;
    temp->next=head->next;
    display(&one);
}