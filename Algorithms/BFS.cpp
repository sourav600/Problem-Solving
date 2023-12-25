#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> g[N];
bool vis[N];
int parent[N], lvl[N];

void bfs(int src){
    deque<int> q;
    q.push(src);
    vis[src] = true;
    lvl[src] = 0;
    parent[src] = -1;

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto child: g[cur]){
            if(vis[child]) continue;
            q.push(child);
            lvl[child] = lvl[cur]+1;
            parent[child] = cur;
            vis[child] = true;
        }
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
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    cout<<"Adjacency List: \n";
    for(int i=1; i<=ver; ++i){
        cout<<i<<": ";
        for(auto it : g[i]) cout<<it<<" ";
            cout<<endl;
    }

    cout<<"BFS Traversal: ";
    bfs(1);




return 0;
}
