#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;

class Binary_Tree{
public: 
    int data;
    Binary_Tree* left;
    Binary_Tree* right;
};

Binary_Tree* create_Node(int data){
    Binary_Tree* newNode = new Binary_Tree();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Binary_Tree* insertNode(Binary_Tree* root, int data){

    if(root==NULL) root = create_Node(data);
    else if(data <= root->data) root->left = insertNode(root->left, data);
    else root->right = insertNode(root->right, data);

    return root;
}

Binary_Tree* FindMin(Binary_Tree* root){
    while(root->left!=NULL) root = root->left;
    return root;
}
Binary_Tree* DeleteNode(Binary_Tree* root, int key){
    if(root==NULL) return root;
    else if(key < root->data) root->left = DeleteNode(root->left,key);
    else if(key>root->data) root->right = DeleteNode(root->right,key);
    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
        }
        else if(root->right==NULL){
            Binary_Tree* temp = root;
            root = root->left;
            delete temp;
        }
        else if(root->left == NULL){
            Binary_Tree* temp=root;
            root=root->right;
            delete temp;
        }

        else{
            Binary_Tree* mini=FindMin(root->right);
            root->data = mini->data;
            root->right = DeleteNode(root->right, mini->data);
        }
    }
    return root;
}

void preorder(Binary_Tree* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void Inorder(Binary_Tree* root){
    if(root==NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    Binary_Tree* root = NULL;
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);
    Inorder(root);
    cout<<endl;
    root = DeleteNode(root,20);
    Inorder(root);
    
return 0;
}