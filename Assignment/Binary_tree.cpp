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

void preorder(Binary_Tree* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    Binary_Tree* root = NULL;
    root = insertNode(root, 15);
    root = insertNode(root, 20);
    root = insertNode(root, 10);
    root = insertNode(root, 8);
    root = insertNode(root, 18);
    root = insertNode(root, 12);
    root = insertNode(root, 25);
    preorder(root);
    
    
return 0;
}