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

struct hash_pair {
   template <class T1, class T2>
   size_t operator()(const pair<T1, T2>& p) const{
      auto hash1 = hash<T1>{}(p.first);
      auto hash2 = hash<T2>{}(p.second);
      return hash1 ^ hash2;
   }
};

unordered_map<pair<int, int>, int, hash_pair> um;
vector<int> g[1001];
bool visited[1001];

int parent[1001];
int siz[1001];
void make(int a){
    parent[a] = a;
    siz[a]=1;
}
int find(int a){
    if(a==parent[a]) return a;
    return parent[a] = find(parent[a]);
}
void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        if(siz[a]<siz[b]) swap(a,b);
        siz[a]+=siz[b];
        parent[b]=a;
    }
}
void dfs(int ver){
    if(visited[ver]) return;
    //cout<<ver<<" ";
    visited[ver] = true;
    for(auto child : g[ver]){
        if(visited[child]) continue;
        dfs(child);
    }
}

void SOURAV(int tc){
    int n,u,v; cin>>n;
    vi node;
    vpi inp;
    For(i,n-1){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
        inp.push_back({u,v});
    }
    for(int i=1; i<=n; ++i){
        make(i);
    }
    for(int i=1; i<=n; ++i){
        if(!visited[i]) {
            node.push_back(i);
            dfs(i);
        }
    }
    node.erase(node.begin());

    vpi ans;
    for(int i=0; i<n-1; ++i){
        int a = inp[i].first;
        int b = inp[i].second;
        if(find(a)==find(b)) ans.push_back({a,b});
        else{
            Union(a,b);
        }
    }
    cout<<ans.size()<<nl;
    int pos = 0;
    For(i,ans.size()){
        cout<<ans[i].first<<" "<<ans[i].second<<" "<<1<<" "<<node[pos++]<<nl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    SOURAV(1);

return 0;
}



