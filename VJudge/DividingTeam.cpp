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
bool vis[N];
int parent[N];
int team[N];

bool bfs(int src){
	vis[src] = true;
	queue<int> q;
	q.push(src);
	parent[src] = 0;
	team[src] = 1;

	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(auto child : adj[cur]){
			if(parent[cur] == child) continue;
			if(parent[child] != 0) {
				//cout<<cur<<" "<<child<<" "<<parent[child]<<nl;
				return false;
			}
			if(vis[child]) continue;
			q.push(child);
			vis[child] = true;
			parent[child] = cur;
			team[cur]==1? team[child]=2 : team[child]=1;
		}
	}
	return true;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,m;
    cin>>n>>m;
    int u,v;
    For(i,m){
    	cin>>u>>v;
    	adj[u].push_back(v);
    	adj[v].push_back(u);
    }
 	bool isPossible = true;
 	For(i,n){
 		if(!vis[i+1]) isPossible &= bfs(i+1);
 	}
 	if(isPossible){
 		For(i,n) cout<<team[i+1]<<" ";
 	}
 	else cout<<"IMPOSSIBLE\n";
return 0;
}



