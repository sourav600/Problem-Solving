// #include<bits/stdc++.h>
// using namespace std;
// class Node{
// public: 
//     int data;
//     Node* next;
// };

// Node* push(Node* head_ref, int value){
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = head_ref;

//     if(head_ref==NULL){
//         newNode->next = newNode;
//     }
//     else{
//         Node* temp = head_ref;
//         while(temp->next != head_ref)
//             temp = temp->next;
//         temp->next = newNode;
//     }
//     head_ref = newNode;
//     return head_ref;
// }

// void print(Node* head_ref){
//     Node* temp = head_ref;
//     do{
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }while(temp!=head_ref);
// }

// int main(){
//     #ifndef ONLINE_JUDGE
//     freopen("../Input.txt", "r", stdin);
//     freopen("../Output.txt", "w", stdout);
//     #endif
//     Node* head = NULL;
    
//     head=push(head,10);
//     head=push(head,60);
//     head=push(head,11);
//     head=push(head,15);
//     head=push(head,17);

//     print(head);
    


// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

Node *head=NULL;

void push(int n)
{
    Node* temp=new Node();
    temp->data=n;
    temp->next=NULL;
    if(temp==NULL)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        if(head==NULL)
        {
            head=temp;
            temp->next=head;
        }
        else
        {
            Node *t;
            t=head;
            while(t->next != head)
            {
                t=t->next;
            }
            t->next=temp;
            temp->next=head;
        }
    }
}

void Delete()
{
    Node* temp;
    temp=head;

    if(head==NULL)
    {
        cout<<"Underflow"<<endl;
    }
    else if(head->next==head)
    {
        head=NULL;
        free(head);
    }
    else
    {
        Node* t;
        while(temp->next != head)
        {
            t=temp;
            temp=temp->next;
        }
        t->next=temp->next;
        free(temp);
    }
}

void display()
{
    Node *temp;
    temp=head;

    if(temp==NULL)
    {
        cout<<"Empty";
    }
    else
    {
        while(temp->next != head)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<" ";
    }
    cout<<endl;
}

int main()
{
    system("clear");
    int n,ct=0;
    int ch;
    while(1)
    {
        cout<<"List : ";
        display();
        cout<<"Menu : "<<endl;
        cout<<"\t 1 : Insert"<<endl;
        cout<<"\t 2 : Delete"<<endl;
        cout<<"\t 3 : Exit"<<endl;
        cin>>ch;
        if(ch==1)
        {
            system("clear");
            cout<<"Enter element for insert : ";
            cin>>n;
            push(n);
            ct++;
        }
        else if(ch==2)
        {
            system("clear");
            if(ct>0)
            {
                Delete();
                ct--;
            }
            else
            {
                system("clear");
                cout<<"List is EMPTY!"<<endl;
                continue;
            }
        }
    
        else if(ch==3)
        {
            system("clear");
            cout<<"Program End!\n";
            return 0;
        }
        else {
            system("clear");
            cout<<"Please enter a valid integer.\n";
            continue;
        }
    }
    return 0;
}