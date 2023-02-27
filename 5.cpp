#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};


void push(Node** head_ref, int new_data, int *n) 
{ 
    Node* new_node = new Node();
   
    Node *last = *head_ref;
   
    new_node->data = new_data; 
   
    new_node->next = NULL; 
   
    
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        *n++;
        cout<<n;
        return; 
    } 
   
    while (last->next != NULL) 
    {
        last = last->next;
        *n+=1;
        cout<<"\t"<<*n; 
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
int modFromEnd(Node* head, int n)
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
int main()
{
    Node* head = NULL;
    int n;
    for (int i=1; i <=20; i++){
        n=1;
        push(&head, i, &n);
    }
    cout<<"\n"<<++n<<"\n";
    printList(head);
    int k =3;
    for(int i =n; i>=0; i--){
        if(i%k==0){
            cout<<"\n"<<modFromEnd(head, i);
            break;
        }
    }
    return 0;
}