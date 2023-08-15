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

Node* reverse(Node* head)
{
    if(head == NULL || head -> next == NULL)
        return head;
    

    Node* curr = head, *prev = NULL;

    while(curr != NULL)
    {
        prev = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = prev;
        curr = curr -> prev;
    }
    return prev -> prev;
}