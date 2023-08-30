#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=1; i<=n; i++)
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

void SOURAV(int tc){
	ll n,k;cin>>n>>k;
	vl v(n+1);

	unordered_map<ll,ll> um;
	ll mx = INT_MIN;
	For(i,n) {
		cin>>v[i];
		um[v[i]]=1;
		mx = max(mx,v[i]);
	}

	ll missing = mx+1;
	for(int i=0; i<=mx; ++i) {
		if(um[i]==0){
			missing=i;
			break;
		}
	}
	if(n==k){
		for(int i=2; i<=n; ++i) cout<<v[i]<<" ";
		cout<<missing;
	}
	else if(n>k){
		ll pos = k;
		for(int i=1; i<pos; ++i){
			cout<<v[n-pos+i+1]<<" ";
		}
		cout<<missing<<" ";
		for(int i = k+1; i<=n; ++i){
			cout<<v[i-k]<<" ";
		}

	}else{
		ll pos = k%(n+1);
		//if(k%n==0) pos = pos%n;
		//if(k%n) pos = (pos-1) % n;
		//if(pos > 0) --pos;
		for(int i=1; i<pos; ++i){
			cout<<v[n-pos+i+1]<<" ";
		}
		if(pos<=n && pos!=0)cout<<missing<<" ";
		for(int i = pos+1; i<=n; ++i){
			cout<<v[i-pos]<<" ";
		}
	}
	cout<<nl;
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



