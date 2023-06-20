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

int n,m;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
bool isValid(int x,int y){
    return x>=1 && y>=1 && x<=n && y<=m;
}

vector<int> adj[N];
int parent[N];
bool visited[N];

void dfs(int src){
	parent[src] = 0;
	queue<int> q;
	q.push(src);
	visited[src] = true;

	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(auto child : adj[cur]){
			if(!visited[child]){
				q.push(child);
				visited[child] = true;
				parent[child] = cur;
			}
		}
	}
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,m;	cin>>n>>m;
    int u,v;
    For(i,m){
    	cin>>u>>v;
    	adj[u].push_back(v);
    	adj[v].push_back(u);
    }
    dfs(1);
    int ver = n;
    // cout<<n<<" ";
    // while(parent[n] != 0){
    // 	cout<<parent[n]<<" ";
    // 	n=parent[n];
    // }
    vector<int> ans;
    ans.push_back(n);
    while(parent[n]!=0){
    	ans.push_back(parent[n]);
    	n = parent[n];
    }

    if(ans[ans.size()-1] == 1){
    	cout<<ans.size()<<nl;
    	for(int i=ans.size()-1; i>=0; --i) cout<<ans[i]<<" ";
    }
	else cout<<"IMPOSSIBLE\n";
    
return 0;
}



