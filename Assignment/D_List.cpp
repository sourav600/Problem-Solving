#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
};
Node* addFirst(Node* head, int new_data)
{
    Node* temp = new Node();
    temp->data = new_data;
    temp->next = head;
    temp->prev = NULL;
    if (head != NULL)
        head->prev = temp;
    head = temp;
}

Node* addLast(Node* head, int new_data)
{
    Node* new_node = new Node();
  
    Node* last = head; 
    new_node->data = new_data;
    new_node->next = NULL;
    if (head == NULL) {
        new_node->prev = NULL;
        head = new_node;
        return head;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    new_node->prev = last;
  
    return head;
}
void print(Node* head)
{
    Node* temp;
    cout << "Traverse in First to Last: \n";
    while (head != NULL) {
        cout << head->data << " ";
        temp = head;
        head = head->next;
    }
    cout<<endl;
    cout << "Traverse in Last to First: \n";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    Node* head = NULL;
    head = addFirst(head,10);
    head = addFirst(head,15);
    head = addLast(head,35);
    head = addFirst(head,40);
    head = addFirst(head,100);
    head = addLast(head,50);

    print(head);

return 0;
}