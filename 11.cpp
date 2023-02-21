#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

bool isCircular(Node *head)
{
    
    if (head == NULL)
       return true;
 
    
    Node *ptr = head->next;
 
    while (ptr != NULL && ptr != head)
       ptr = ptr->next;
    
    return (ptr == head);
}

Node *newNode(int data)
{
    
    Node *ptr = new Node;
    ptr->data = data;
    ptr->next = NULL;
    return ptr;
}
 

int main()
{
    
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
 
    if(isCircular(head))
        cout << "Yes\n";
    else
        cout << "No\n" ;
 
    head->next->next->next->next = head;
 
    if(isCircular(head))
        cout << "Yes\n";
    else
        cout << "No\n" ;
 
    return 0;
}