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
const ll N = 2e4 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}


vector<int> adj[N];
int color[N];
int ct;
bool vis[N];

void dfs(int ver){
	vis[ver] = true;
	for(auto child: adj[ver]){
		if(vis[child]) continue;
		if(color[ver]!=color[child]){
			++ct;
		}
		dfs(child);
	} 
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,p; cin>>n;
    for(int i=2; i<=n;++i){
    	cin>>p;
    	adj[p].push_back(i);
    	adj[i].push_back(p);
    }
    for(int i=1; i<=n; ++i) cin>>color[i];

    dfs(1);
    cout<<ct+1<<nl;

return 0;
}



