#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,a,n) for(int i=a; i<=n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define all(x) x.begin(), x.end()
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

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
const ll N = 1e5 + 10;

void solve(int tc){
	ll n; cin>>n;
	vl a(n+1,-1), b(n+1,-1);
	unordered_map<ll,ll> um;
	ll ct=1, ans =1;
	For(i,1,n){
		cin>>a[i];
		um[a[i]] = max(1LL,um[a[i]]);

		if(a[i] == a[i-1]){
			++ct;
			um[a[i]] = max(um[a[i]],ct);
		}
		else ct = 1;

		ans = max(ans,ct);
	}

	ct = 1;
	
	For(i,1,n){
		cin>>b[i];
		if(b[i] == b[i-1]){
			++ct;
		}else{
			ct=1;
		}
		ans =  max(ans, ct+um[b[i]]);
	}
	cout<<ans<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}