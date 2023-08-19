#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
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

vi adj[N];
bool vis[N];
int level[N];
unordered_map<int,int> um;

int bfs(int src){
	queue<int> q;
	q.push(src);
	vis[src] = 1;
	int vipar = 1, lykan = 0;

	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(auto child: adj[cur]){
			if(vis[child]) continue;

			q.push(child);
			vis[child] = 1;
			level[child] = level[cur]+1;
			if(level[child] % 2) ++lykan;
			else ++vipar;
		}
	}return max(vipar,lykan);
}

void reset(){
	For(i,N) adj[i].clear();
	mem(vis,0);
	mem(level,0);
	um.clear();
}

void SOURAV(int tc){
	cout<<"Case "<<tc<<": ";

	reset();
	int n; cin>>n;
	int u,v;
	For(i,n){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		um[u] = 1;
		um[v] = 1;
	}
	ll sum = 0;
	For(i,20002){
		if(um[i]==1 && vis[i]==0){
			sum += bfs(i);
		}
	}cout<<sum<<nl;

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    SOURAV(tc++);

return 0;
}



