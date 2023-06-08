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
const ll M = 2e9 + 7;
const ll N = 2e5 + 10;

ll n,k;
ll arr[N];

bool isPossible(ll a){
	ll m = (n+1)/2,  ct=0;

	for(int i=m; i<=n; ++i){
		if(a > arr[i]) ct += max(0LL,a-arr[i]);
	}
	return k>=ct;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    cin>>n>>k;
    For(i,1,n) cin>>arr[i];
    sort(arr+1, arr+n+1);
    ll ans=0;
    ll lo=1, hi = 2e9;

    while(lo<=hi){
    	ll mid = (hi+lo)>>1;
    	if(isPossible(mid)){
    		ans = mid;
    		lo = mid+1;
    	}else{
    		hi = mid-1;
    	}
    }
    cout<<ans<<nl;

return 0;
}