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
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];

void dfs(int ver){
    if(vis[ver]) return;

    vis[ver]=true;
    for(int child : g[ver]){
        dfs(child);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int v,e;
    cin>>v>>e;
    
    int v1,v2;
    For(i,e){
        cin>>v1>>v2;
        g[v1].pb(v2);
        g[v2].pb(v1);
    }
    int cc = 0;
    For(i,v){
        if(vis[i+1]) continue;
        dfs(i+1);
        ++cc;
    }
    cout<<cc<<nl;

return 0;
}