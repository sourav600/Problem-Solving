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
#define vpp vector<pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
const ll INF = 1e9 + 7;
const ll N = 1e6 + 10;


int par[N];
bool isPossible;

void bfs(int v, int power,vector<int> g[],vector<bool> &vis){
    //cout<<v<<" "<<power<<nl;
    if(vis[v]) {
        cout<<"NO\n";
        isPossible=false;
        return;
    }
    queue<int> q;
    q.push(v);
    vis[v]=true;
    par[v] = v;

    while(power--){
        int cur = q.front();
        q.pop();
        for(auto child : g[cur]){
            if(child==par[cur]) continue;
            if(vis[child] && par[cur]!=par[child]){
                cout<<"NO\n";
                isPossible=false;
                return;
            }
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                par[child] = v;
            }
        }
    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    int t; cin>>t;
    while(t--){
        
        isPossible = true;
        int n,r,m;
        cin>>n>>r>>m;
        vector<bool> vis(n+1,false);
        vector<int> g[n+1];
        int u,v;
        For(i,r){
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vector<pair<int,int> > vp;
        while(m--){
            int k,s;
            cin>>k>>s;
            vp.push_back({k,s});
        }
        for(auto it: vp){
            if(isPossible)bfs(it.first,it.second,g,vis);
        }
        if(isPossible)cout<<"Yes\n";
        vp.clear();
    }
    

return 0;
}