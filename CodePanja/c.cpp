#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

// bool vis[N];
// int parent[N], lvl[N];


void solve(){
    vector<int> g[N];
    vector<bool> vis(N, false);
    vector<int> parent(N,0), lvl(N,0);

    int v,e;
    cin>>v>>e;
    int v1,v2;
    for(int i=1;i<=e;++i){
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    queue<int> q;
    q.push(1);
    vis[1] = true;
    lvl[1] = 0;
    parent[1] = -1;

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

    // for(int i=1; i<=v; ++i){
    //     cout<<lvl[i]<<" ";
    // }cout<<endl;

    int flag = true;
    for(int i=1; i<v; ++i){
        if(!vis[i]){
            cout<<"NO\n";
            return;
        }
        if(lvl[i] > lvl[i+1]) {flag = false; break;}
    }

    (flag == true && vis[v]) ? cout<<"YES\n" : cout<<"NO\n";
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    int t; cin>>t;
    while(t--)
        solve();



return 0;
}
