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

void append(Node** head_ref, int x)
{
    Node* last = (*head_ref) -> prev;
    if((*head_ref) == NULL)
    {
        Node* new_node = new Node(x);

        new_node -> next = new_node -> prev = new_node;

        *head_ref = new_node;
        return;
    }

    Node* curr = new Node(x);

    curr -> next = (*head_ref);

    (*head_ref) -> prev = curr;
    curr -> prev = last;

    (*head_ref) = curr;
}