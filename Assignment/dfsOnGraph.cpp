#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> graph[N];
bool visited[N];

void dfs(int ver){
    if(visited[ver]) return;
    cout<<ver<<" ";
    visited[ver] = true;
    for(auto child : graph[ver]){
        if(visited[child]) continue;
        dfs(child);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    int v,e; cin>>v>>e; //number of vertex & edges

    
    int v1,v2;
    for(int i=0; i<e;++i){
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    cout<<"Adjacency List: \n"; 
    for(int i=1; i<=v;++i){
        cout<<i<<" : ";
        for(auto child: graph[i]) cout<<child<<" ";
        cout<<"\n";
    }
    cout<<"\nDFS traversal: \n";
    dfs(1);

return 0;
}