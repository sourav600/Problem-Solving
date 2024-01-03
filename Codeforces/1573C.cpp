#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=1; i<=n; i++)
#define all(x) x.begin(), x.end()
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>

typedef unsigned long long  ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const ll M = 1e9 + 7;
const ll N = 2e5 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}

int n;
vector<int> adj[N],g[N], ans;
bool visited[N],cycle;
int color[N], dp[N];

void reset(int n){
    For(i,n){
        adj[i].clear();
        g[i].clear();
        visited[i] = false;
        color[i] = 0;
        dp[i] = 0;
    }
    ans.clear();
    cycle = false;
}

bool checkCycle(){
    vector<int>ind(n + 1);
    for (int i = 0; i < n; i++) ind[ans[i]] = i;
    for (int i = 1; i <= n; i++) {
        for (auto u : adj[i]) {
            if (ind[u] <= ind[i]) {
                return false;
            }
        }
    }
    return true;
}
void dfs(int ver){
    visited[ver] = true;
    for(auto child: adj[ver]){
        if(visited[child]) continue;
        dfs(child);
    }
    ans.push_back(ver);
}

void toposort(){
    for(int i=1; i<=n; ++i){
        if(!visited[i])
            dfs(i);
    }
    reverse(ans.begin(), ans.end());
}

void SOURAV(int tc){
    cin>>n;
    reset(n);
    For(i,n){
        int x,v; cin>>x;
        if(x==0) dp[i] = 1;
        while(x--){
            cin>>v;
            adj[v].push_back(i);
            g[i].push_back(v);
        }
    }
    //bool flag = checkCycle();
    // For(i,n) {
    //     if(color[i]==0) checkCycle(i);
    //     if(cycle) break;
    // }

    toposort();
    if(!checkCycle()){
        cout<<-1<<nl;
        return;
    }
    //For(i,ans.size()) cout<<ans[i-1]<<" ";
    //cout<<nl;

    for(int i=1; i<ans.size(); ++i){
        for(auto child: g[ans[i]]){
            if(ans[i] > child) dp[ans[i]] = max(dp[ans[i]] , dp[child]);
            else dp[ans[i]] = max(dp[ans[i]] , dp[child]+1);
        }
    }
    int mx = INT_MIN;
    For(i,n) mx = max(mx,dp[i]);
    cout<<mx<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    SOURAV(tc++);

return 0;
}



