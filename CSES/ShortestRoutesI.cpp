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

int n,m;
vector<pair<int, int>> g[N];
bool visited[N];

void dijkstra(int src){
    vector<ll> dist(N, 1e15);
    set<pair<ll,int>> st;

    dist[src] = 0;
    st.insert({0,src});

    while(!st.empty()){
        auto node = *st.begin();
        ll dis = node.first;
        int v = node.second;
        st.erase(st.begin());
        if(visited[v]) continue;
        visited[v] = true;

        for(auto child: g[v]){
            int child_v = child.first;
            int child_wt = child.second;
            if(dist[v]+child_wt < dist[child_v]){
                dist[child_v] = dist[v]+child_wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
    for(int i=1;i<=n;++i) cout<<dist[i]<<" ";
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    cin>>n>>m;
    int a,b,c;
    For(i,m){
        cin>>a>>b>>c;
        g[a].push_back({b,c});
    }
    dijkstra(1);
return 0;
}



