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
/*************************SOURAV***************************/
vector<int> adj[N];
int color[N];
vector<int> ans;
bool isCycle;
map<pair<int, int>, int > um;

void dfs(int ver, int par){
	color[ver] = 1;
	for(auto child : adj[ver]){
		if(color[child]==1 && child==par) continue;

		if(color[child] == 0) {
			ans.push_back(child);
			dfs(child,ver);
		}
		else if(color[child]==1){
			ans.push_back(child);
			isCycle = true;
			vector<int> cycle;
		    int n = ans.size()-1;
		    cycle.push_back(ans[n]);
		    for(int i=n-1 ; i>=0; --i) {
		    	cycle.push_back(ans[i]);
		    	if(ans[i]==ans[n]) break;
		    }
		    cout<<cycle.size()<<nl;
		    for(auto it: cycle) cout<<it<<" ";
			exit(0);
		}

	}
	color[ver] = 2;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int v,e;
    cin>>v>>e;
    int v1,v2;
    For(i,e){
    	cin>>v1>>v2;
    	adj[v1].push_back(v2);
    	adj[v2].push_back(v1);
    	um[{v1,v2}]++;
    	um[{v2,v1}]++;
    }
    for(auto it : um){
    	if(it.second > 1){
    		int a = it.first.first;
    		int b = it.first.second;
    		if(a==b){
    			cout<<2<<nl; // contain self loop
    			cout<<a<<" "<<b<<nl;
    			return 0;
    		}else{
    			cout<<3<<nl; // multiple edge between two vertex 
    			cout<<a<<" "<<b<<" "<<a<<nl;
    			return 0;
    		}
    	}
    }
    
    for(int i=1; i<=v;++i){
    	if(color[i] == 0){
    		ans.push_back(i);
    		dfs(i,0);
    		ans.clear();
    	}
    }

    if(!isCycle) cout<<"IMPOSSIBLE\n";
    
return 0;
}
