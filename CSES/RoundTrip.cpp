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

vector<int> g[N],parent(N);
bool visited[N];
bool cycle = false;
int ver1 = -1, ver2 = -1;

void dfs(int ver, int par){
    visited[ver] = true;
    //cout<<ver<<nl;

    for(auto child: g[ver]){
        if(visited[child] && child!=par) {
            cycle = true;
            ver2 = child;
            ver1 = ver;
            //return;
        }
        if(visited[child]) continue;
        parent[child] = ver;
        dfs(child, ver);
    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,m;cin>>n>>m;
    For(i,m){
        int u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=1; i<=n; ++i){
        if(!visited[i]) {
            parent[i]=-1;
            dfs(i,-1);
        }
    }

    //For(i,n) cout<<parent[i+1]<<" "; cout<<nl;
    if(cycle){
        vi ans;
        ans.push_back(ver1);
        while(ver2 != ver1){
            ans.push_back(ver2);
            ver2 = parent[ver2];
        }
        ans.push_back(ver1);
        cout<<ans.size()<<nl;
        for(auto p: ans) cout<<p<<" ";
        cout<<nl;
    }
    else{
        cout<<"IMPOSSIBLE\n";
    }
return 0;
}



