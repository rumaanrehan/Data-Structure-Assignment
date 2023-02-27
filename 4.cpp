#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};


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
    {
        last = last->next; 
    }
    
    last->next = new_node; 
    return ; 
}

void printList(Node *node)
{
    while(node != NULL)
    {
        cout<<node->data<<"->";
        node = node->next;
    }

}
int rootNnode(Node* head, int n)
{
    int i=1;
    Node *ptr;
    ptr = head;
    while(i<n && ptr!=NULL){
    ptr = ptr->next;
    i++;
   } 
   return ptr->data;
}
int lengthList(Node* head)
{
    Node *ptr;
    ptr= head;
    int n=0;
    while(ptr){
        ptr= ptr->next;
        n++;
    }
    return n;
}
int main()
{
    Node* head = NULL;
    for (int i=1; i <=20; i++){
        push(&head, i);
    }
    printList(head);
    int n = lengthList(head);
    int root = sqrt(n);
    cout<<"\n"<<rootNnode(head, root);
    /*
    for(int i =n; i>=0; i--){
        if(i%k==0){
            cout<<modFromEnd(head, i);
            break;
        }
    }*/
    return 0;
}