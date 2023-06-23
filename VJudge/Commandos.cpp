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

vector<int> adj[N];
int dist_s[N], dist_d[N];
bool vis[N];

void bfs(int src, int dist[]){
	queue<int> q;
	q.push(src);
	vis[src] = true;

	while(!q.empty()){
		int cur = q.front();
		q.pop();

		for(auto child : adj[cur]){
			if(vis[child]) continue;
			dist[child] = dist[cur] + 1;
			vis[child] = true;
			q.push(child);
		}
	}
}

void solve(int tc){
	//reset
	mem(dist_s,0);
	mem(dist_d,0);
	mem(vis,false);
	For(i,N) adj[i].clear();

	cout<<"Case "<<tc<<": ";
	int n,m;
	cin>>n>>m;
	int u,v;
	For(i,m){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int s,d;
	cin>>s>>d;
	
	bfs(s,dist_s);
	mem(vis,false);
	bfs(d, dist_d);

	int ans = 0;
	For(i,n){
		ans = max(ans, dist_s[i]+dist_d[i]);
	}
	cout<<ans<<nl;
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



