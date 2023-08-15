#include <iostream>
using namespace std;

struct Node
{
    int data;

    Node* prev, *next;

    Node(int x)
    {
        data = x;

        prev = NULL, next = NULL;
    }
};

void printlist(Node *head)
{
    Node *curr=head;

    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main()
{
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head -> next = second;
    second -> prev = head;
    second -> next = third;
    third -> prev = second;

    printlist(head);

    return 0;
}