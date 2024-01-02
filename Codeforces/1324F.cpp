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

vector<int> g[N], a(N);
int dp[N], ans[N];
void dfs(int ver, int par){
    dp[ver] = a[ver];
    for(auto child: g[ver]){
        if(child==par) continue;
        dfs(child,ver);
        dp[ver] += max(dp[child],0);
    }
}
void dfs1(int ver, int par, int x=0){
    ans[ver] = dp[ver] + x;
    for(auto child: g[ver]){
        if(child==par) continue;
        dfs1(child,ver, max(0,ans[ver]-max(0, dp[child])));
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll n, u,v; cin>>n;
    For(i,n){
        cin>>a[i];
        if(a[i]==0) a[i] = -1;
    }
    For(i,n-1){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,-1);
    dfs1(1,-1);
    For(i,n) cout<<ans[i]<<" ";

return 0;
}



