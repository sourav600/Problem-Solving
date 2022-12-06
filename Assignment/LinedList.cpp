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

    while(node != NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<nl;
}

int main(){
   
    // addToLast(&head,10);
    // addToFirst(&head,20);
    // addToFirst(&head,25);
    // addCustom(&head, 3,15);
    // print(head);
    // deleteNode(&head,10);
    // print(head);

    Node* head = NULL;
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

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//  public:
//     int data;
//     node* left;
//     node* right;
//     node(int x)
//     {

//         data=x;
//         left=NULL;
//         right=NULL;
//     }

// };
// node* Insert(node* &root,int x)
// {

//     node* newNode=new node(x);
//     if(root==NULL)
//     {
//      root=newNode;

//     }
//     else if(x<root->data)
//     {
//         root->left=Insert(root->left,x);
//     }
//    else
//     {
//         root->right=Insert(root->right,x);
//     }
//     return root;
// }
// node* minvalue(node* root)
// {

//     node* temp=root;
//     while(temp&&temp->left!=NULL)
//     {
//         temp=temp->left;
//         return temp;
//     }
// }
// node* Delet(node* &root,int x)
// {
//     if(root==NULL)return root;
//     if(x<root->data)
//     {
//         root->left=Delet(root->left,x);
//     }
//     else if(x>root->data)
//     {
//         root->right=Delet(root->right,x);
//     }
//     else{
//         if(root->left==NULL&&root->right==NULL)
//         {
//             delete root;
//             root=NULL;
//             return root;
//         }
//         else if(root->left==NULL)
//         {

//             node* temp=root->right;
//             delete root;
//             return temp;
//         }
//         else if(root->right==NULL)
//         {

//             node* temp=root->left;
//             delete root;
//             return temp;
//         }
//         else{
//             node* temp=minvalue(root->right);
//             root->data=temp->data;
//             root->right=Delet(root->right,temp->data);
//         }
//     }
//     return root;
// }
// node* Preorder(node* &root)
// {
//     if(root==NULL)return root;
//     cout<<root->data<<" ";
//     Preorder(root->left);
//     Preorder(root->right);
// }
// node* Postorder(node* &root)
// {
//     if(root==NULL)return root;

//     Postorder(root->left);
//    Postorder(root->right);
//    cout<<root->data<<" ";
// }
// node* Inorder(node* &root)
// {
//     if(root==NULL)return root;

//      Inorder(root->left);
//      cout<<root->data<<" ";
//     Inorder(root->right);

// }


// int main()
// {
//     node* root=NULL;
//     system("clear");
//     cout<<"Preorder traversal: ";
//     Preorder(root);
//     cout<<endl;
//     while(true){
//         cout<<"***MENU***\n1. Insert    2. Delete   3.Exit\n";
//         int x; cin>>x;
//         if(x==1){
//             cout<<"Input elemet to insert: ";
//             int n; cin>>n;
//             Insert(root,n);
//             system("clear");
//             cout<<"Preorder traversal: ";
//             Preorder(root);
//             cout<<endl;
//         }
//         else if(x==2){
//             cout<<"Input elemet to delete: ";
//             int n; cin>>n;
//             Delet(root,n);
//             system("clear");
//             cout<<"Preorder traversal: ";
//             Preorder(root);
//             cout<<endl;
//         }
//         else if(x==3){
//             cout<<"Program end";
//             break;
//         }
//         else cout<<"Please enter a valid integer\n ";
//     }
    
    
    


// }