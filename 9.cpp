#include <bits/stdc++.h>
 using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

void printList(Node *node)
{
    while(node != NULL)
    {
        cout<<node->data<<"->";
        node = node->next;
    }

}

void push(Node** head_ref, int new_data) 
{ 
   
    Node* new_node = new Node();
   
    Node *last = *head_ref;
   
    new_node->data = new_data; 
   
    new_node->next = NULL; 
   
  
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    } 
   
    while (last->next != NULL) 
        last = last->next; 
   
    last->next = new_node; 
    return; 
}

Node* reversek(Node* &head, int k)
{
    Node* prev =NULL;
    Node* curr = head;
    Node* next;

    int count = 0;
    while(curr !=NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr= next;
        count++;
    }
    if(next!=NULL){
    head->next = reversek(next, k);
    }
    return prev;
}

int main()
{
    Node* head = NULL;
    push(&head,1);
    push(&head,34);
    push(&head,5);
    push(&head,76);
    push(&head,44);
    push(&head,0);
    push(&head,9);
    push(&head,10);

    printList(head);
    cout<<"\n";
    int k =4;
    Node* newhead = reversek(head,k);
    printList(newhead);
    return 0;
}