#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> adj[N];
bool visited[N];

void dfs( int ver){
    if(visited[ver] == true) return;
    visited[ver] = true;
    cout<<ver<<" ";
    for(auto child: adj[ver]){
        if(visited[child]) continue;
        dfs(child);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int ver,edges;
    cin>>ver>>edges;
    int v1,v2;
    for(int i=1;i<=edges;++i){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    cout<<"Adjacency List: \n";
    for(int i=1; i<=ver; ++i){
        cout<<i<<": ";
        for(auto it : adj[i]) cout<<it<<" ";
            cout<<endl;
    }

    cout<<"DFS Traversal: ";
    dfs(1);




return 0;
}