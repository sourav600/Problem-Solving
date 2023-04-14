#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+10;

vector<int> tree[N];

void dfs(int ver, int parent){
    cout<<ver<<" ";
    for(auto child : tree[ver]){
        if(child==parent) continue;
        dfs(child,ver);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    int v; cin>>v; //number of vertex

    //tree has n-1 edges
    int v1,v2;
    for(int i=0; i<v-1;++i){
        cin>>v1>>v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }

    cout<<"Adjacency List: \n"; 
    for(int i=1; i<=v;++i){
        cout<<i<<" : ";
        for(auto child: tree[i]) cout<<child<<" ";
        cout<<"\n";
    }
    cout<<"\nDFS traversal: \n";
    dfs(1,-1);

return 0;
}