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
const ll N = 2e6 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}

ll prefix[N];

void SOURAV(int tc){
	ll n; cin>>n;
	ll m = n;

	vl v(n+1);
	set<ll> st;
	unordered_map<ll,ll> idx, rev;

	For(i,n){
		cin>>v[i];
	}

	ll p = 1;
	while(m--){
		mem(prefix,0);
		st.clear();
		idx.clear(); rev.clear();

		ll s = v[p];
		++p;
		For(i,n){
			if(v[i]<=s){
				st.insert(v[i]);
				st.insert(s+1);
			}else{
				st.insert(s);
				st.insert(v[i]+1);
			}
		}

		ll pos = 0;
		for(auto it: st){
			//cout<<it<<" ";
			idx[it] = ++pos;
			rev[pos] = it;
		}

		For(j,n){
			if(v[j]<=s){
				prefix[idx[v[j]]]++;
				prefix[idx[s+1]]--;
			}else{
				prefix[idx[s]]++;
				prefix[idx[v[j]+1]]--;
			}
		}

		For(i,2*n){
			prefix[i] += prefix[i-1];
		}

		ll sum = 0;
		for(int i=2; i<=pos; ++i){
			sum += (prefix[i-1]*(rev[i] - rev[i-1]));
		}
		cout<<sum<<" ";
		//For(i,2*n) cout<<prefix[i]<<" ";
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



