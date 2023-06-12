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
const ll N = 2e5 + 10;



int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    ll n,k;
    cin>>n>>k;
    vl v(n);
    ll l=1,r=0;
    

    For(i,n) {
    	cin>>v[i];
    	r+=v[i];
    }

    ll ans = -1;
    while(l<=r){
    	ll mid = (l+r)/2;
    	ll sum=0,ct=1;
    	bool isSmall = false;
    	For(i,n){
    		if(v[i] > mid) {
    			isSmall = true;
    			break;
    		}
    		if(sum+v[i] > mid){
    			sum = v[i];
    			++ct;
    		}else{
    			sum += v[i];
    		}
    	}
    	if(isSmall || ct>k){
    		l = mid + 1;
    	}else {
    		ans = mid;
    		r = mid-1;
    	}

    }

    cout<<ans<<nl;

    
return 0;
}




