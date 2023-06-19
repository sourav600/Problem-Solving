#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,n) for(int i=0; i<n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define all(x) x.begin(), x.end()
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>


typedef long long ll;
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

vector<int> g[N];
int depth[N];

void dfs(int v, int parent){
	for(auto child : g[v]){
		if(child==parent) continue;
		depth[child] = depth[v] + 1;
		dfs(child,v);
	}
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n; cin>>n;
    int u,v;
    For(i,n-1){
    	cin>>u>>v;
    	g[u].push_back(v);
    	g[v].push_back(u);
    }

    dfs(1,-1);
    int mx_depth = INT_MIN, mx_node;
    for(int i=1; i<=n; ++i){
    	if(depth[i] > mx_depth){
    		mx_depth = depth[i];
    		mx_node = i;
    	}
    }
    //cout<<mx_depth<<" "<<mx_node<<nl;
    mem(depth,0);
    dfs(mx_node,-1);
    for(int i=1; i<=n; ++i){
    	if(depth[i] > mx_depth){
    		mx_depth = depth[i];
    	}
    }
    cout<<mx_depth<<nl;
return 0;
}



