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
unordered_map<ll, ll> color;
bool visited[N];

void SOURAV(){
	ll n; cin>>n;
	ll u,v;
	For(i,n-1){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	ll l=0,r=0;
	queue<ll> q;
	q.push(1);
	color[1] = 1;
	visited[1] = true;
	++l;

	while(!q.empty()){
		ll cur = q.front();
		q.pop();
		for(auto child: adj[cur]){
			if(visited[child]) continue;
			q.push(child);
			visited[child] = 1;
			if(color[cur]==1){
				color[child] = 2;
				r++;
			}
			else if(color[cur]==2){
				color[child]=1;
				++l;
			}
		}
	}
	cout<<(l*r)-(n-1)<<nl;


}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    SOURAV();

return 0;
}



