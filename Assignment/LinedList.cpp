#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define SIZE 5
int total;

class Node{
public:
    int data;
    Node* next;
};

void addToFirst(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void addToLast(Node** head_ref, int new_data){

    Node* new_node = new Node();
    Node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref==NULL){
        *head_ref = new_node;
        return;
    }

    while(last->next != NULL) last = last->next;

    last->next = new_node;
    return;
}

void addCustom(Node** head_ref, int pos,int new_data){ 

    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node->data = new_data;
    For(i,pos-2){
        last = last->next;
    }
    new_node->next = last->next;
    last->next = new_node;
    return;
}

void deleteNode(Node** head_ref, int key){
    Node* temp = *head_ref;
    Node* prev = NULL;

    if(temp!=NULL && temp->data==key){
        *head_ref = temp->next;
        delete temp;
        return;
    }

    else{
        while(temp != NULL && temp->data != key){
            prev = temp;
            temp = temp->next;
        }
        if(temp==NULL){
            cout<<"This not present in the List\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
    }
}

void print(Node *node){
    if(total<=0){
        cout<<"List is Empty!\n";
        return;
    }
    while(node != NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<nl;
}

int main(){
    Node* head = NULL;
    
    // addToLast(&head,10);
    // addToFirst(&head,20);
    // addToFirst(&head,25);
    // addCustom(&head, 3,15);
    // print(head);
    // deleteNode(&head,10);
    // print(head);

    int i,choose, item;
    char ch;
    while(1)
    {
        system("clear");
        cout<<"Current list: ";
        print(head);
        cout<<endl<<"Enter your choose: "<<endl;
        cout<<"1. Insert."<<endl;
        cout<<"2. Delete."<<endl;
        cout<<"3. Exit."<<endl;
        cin>>choose;
        if(choose==1)
        {
            system("clear");
            cout<<"Current list: ";
            print(head);
            cout<<endl;
            cout<<"Enter 'F' & Element to insert at first."<<endl;
            cout<<"Enter 'L' & Element to insert at last."<<endl;
            cout<<"Enter 'n'th position & Element to insert at nth Position."<<endl;
            cin>>ch>>item;
            if(ch=='F') {
                addToFirst(&head,item);
                total++;
            }
            else if(ch=='L') {
                addToLast(&head,item);
                total++;
            }
               
            else if(isdigit(ch))
            {
                int a;
                a=ch-'0';
                if(a>total)
                {
                    cout<<"Invalid position. Try again.\n";
                }
                else
                {
                    addCustom(&head,a,item);       
                    total++;
                }
            }
            
        }
        else if(choose==2)
        {
            if(total<=0)
            {
                system("clear");
                cout<<"The list is Empty."<<endl;
            }
            
            else{
                cout<<"Enter the key value to delete: ";
                int n; cin>>n;
                deleteNode(&head, n);
                --total;
            }
        }
        else if(choose==3)
        {
            system("clear");
            cout<<"Program End!\n";
            break;
        }
        else {
            system("clear");
            cout<<"Please enter a valid integer.\n";
            continue;
        }
    }


return 0;
}