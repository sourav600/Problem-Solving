#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(ll i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;
const ll N = 1e5+10;

bool vis[N];
vector<ll> g[N];
vector<ll> v(N);

ll dfs(ll ver){
    ll mn = v[ver];
    vis[ver]=true;

    for(auto child : g[ver]){
        if(!vis[child]) {
            mn = min( mn, dfs(child) );
        }
    }
    return mn;
}

void solve(){
    ll n,m,x; cin>>n>>m;
    For(i,n){
        cin>>x;
        v[i+1]=x;
    } 
    ll v1,v2;
    For(i,m){
        cin>>v1>>v2;
        g[v1].pb(v2);
        g[v2].pb(v1);
    }
    ll ans = 0;
    for(int i=1; i<=n;++i){
        if(vis[i]) continue;

        ans += dfs(i);
    }
    cout<<ans<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif


    solve();

return 0;
}