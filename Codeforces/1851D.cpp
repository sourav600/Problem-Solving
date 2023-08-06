#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,n) for(int i=1; i<=n; i++)
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

void solve(int tc){
	int n, duplicate = 0; cin>>n;
	vl v(n+1);
	v[0] = 0;
	For(i,n-1){
		cin>>v[i];
	}

	ll last = (n*(n+1LL))/2LL;

	if(v[n-1] > last){
		cout<<"NO\n";
	}
	else if(v[n-1] < last){
		v[n] = last;
		unordered_map<ll, ll> um;

		For(i,n){
			um[v[i]-v[i-1]]++;
		}
		For(i,n){
			
			if(um[i]!=1){
				cout<<"NO\n";
				return;
			}
		}
		cout<<"YES\n";
	}
	else{
		vl extra;
		unordered_map<ll, ll> um;
		For(i,n-1){
			if(um[v[i]-v[i-1]]==1 || v[i]-v[i-1] > n){
				extra.push_back(v[i]-v[i-1]);
			}
			um[v[i]-v[i-1]]++;
		}
		vl missing;
		For(i,n){
			if(um[i]==0) missing.push_back(i);
		}

		if(missing.size()!=2 || extra.size()!=1){
			cout<<"NO\n";
		}else{
			if(missing[0]+missing[1] != extra[0]){
				cout<<"NO\n";
			}else{
				cout<<"YES\n";
			}
		}
	}


}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}



