#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
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

vector<int> g[N];
bool visited[N];
vector<int> color(N);
bool flag = false;

void dfs(int ver, int par){
    visited[ver] = true;
    int c = 2;
    if(color[ver]==2)c=1;
    for(auto child : g[ver]){
        if(visited[child] && color[child]!=c){
            flag = true;
            return;
        }
        if(visited[child]) continue;

        color[child] = c;
        dfs(child, ver);
    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll n,m;cin>>n>>m;
    vl ans(n,0);
    ll a,b;
    For(i,m){
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    color[1]=1;
    for(int i=1;i<=n; ++i){
        if(!visited[i]) {
            color[i] = 1;
            dfs(i, -1);
        }
        if(flag){
            cout<<"IMPOSSIBLE\n";
            return 0;
        }
    }

    if(flag){
        cout<<"IMPOSSIBLE\n";
        return 0;
    }
    //cout<<"YES\n";
    for(int i=1; i<=n; ++i) cout<<color[i]<<" ";
    cout<<nl;

return 0;
}



