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
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };

int n;
vector<int> adj[N];
map<pair<int,int>, int>  wt;
int dist[N];
bool visited[N];

void dfs(int ver, int par){
	for(auto child : adj[ver]){
		if(child == par) continue;
		dist[child] = dist[ver] + wt[{child,ver}];
		dfs(child,ver); 
	}
}

void solve(int tc){
	wt.clear();
	For(i,N) adj[i].clear();
	mem(dist,0);

	cout<<"Case "<<tc<<": ";
	cin>>n;
	int u,v,w;
	For(i,n-1){
		cin>>u>>v>>w;
		adj[u].push_back(v);
		adj[v].push_back(u);
		wt[{u,v}] = w;
		wt[{v,u}] = w;
	}

	// for(auto it : wt){
	// 	cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<nl;
	// }

	dfs(0,-1);
	int mx_dist = INT_MIN, mx_node;
    for(int i=0; i<n; ++i){
    	if(dist[i] > mx_dist){
    		mx_dist = dist[i];
    		mx_node = i;
    	}
    }
    mem(dist,0);
    dfs(mx_node,-1);
    for(int i=0; i<n; ++i){
    	if(dist[i] > mx_dist){
    		mx_dist = dist[i];
    	}
    } cout<<mx_dist<<nl;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}



