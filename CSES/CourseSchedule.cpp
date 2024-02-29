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
#define allr(x) x.rbegin(), x.rend()
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
const ll N = 1e5 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}

vector<int> g[N]; // adjacency list of graph
vector<int> visited(N);
vector<int> ans;
bool cycle;

void dfs(int ver){
    if(visited[ver]!= 0) return;
    visited[ver] = 1;

    for(auto child: g[ver]){
        if(visited[child]==1) {
            cycle = true;
            return;
        }
        else if(visited[child] == -1) dfs(child);

        //if(cycle) return;
    }

    visited[ver] = 2;
    ans.push_back(ver);
}

void toposort(int n){
    for(int i=1; i<=n; ++i){
        if(visited[i]==-1)
            dfs(i);
        if(cycle) break;
    }
    reverse(ans.begin(), ans.end());
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,m;
    cin>>n>>m;
    int a,b;
    For(i,m){
        cin>>a>>b;
        g[a].push_back(b);
    }
    cycle = false;

    toposort(n);
    if(cycle) cout<<"IMPOSSIBLE\n";
    else for(auto it: ans) cout<<it<<" ";

return 0;
}



