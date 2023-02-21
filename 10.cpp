#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};
 
Node* intesectionNode(Node* head1, Node* head2)
{
    while (head2) {
        Node* ptr = head1;
        while (ptr) {
            if (ptr == head2)
                return head2;
            ptr = ptr->next;
        }
        head2 = head2->next;
    }
    return NULL;
}
 
void printList(Node *node)
{
    while(node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}
int main()
{
 
    Node* ptr;
 
    // Addition of new nodes
    Node* head1 = new Node();
    head1->data = 10;
 
    Node* head2 = new Node();
    head2->data = 3;
 
    ptr = new Node();
    ptr->data = 6;
    head2->next = ptr;
 
    ptr = new Node();
    ptr->data = 9;
    head2->next->next = ptr;
 
    ptr = new Node();
    ptr->data = 15;
    head1->next = ptr;
    head2->next->next->next = ptr;
 
    ptr = new Node();
    ptr->data = 30;
    head1->next->next = ptr;
 
    head1->next->next->next = NULL;
    
    printList(head1); cout<<"\n";
    printList(head2); cout<<"\n";

    Node* intersectionPoint
        = intesectionNode(head1, head2);
 
    if (!intersectionPoint)
        cout << " No Intersection Point \n";
    else
        cout << "Intersection Point: "
             << intersectionPoint->data << endl;
    return 0;
}