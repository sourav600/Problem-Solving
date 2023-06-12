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

void solve(int tc){

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int n,t,mn=M;
    cin>>n>>t;
    vi v(n);
    For(i,n) {
    	cin>>v[i];
    	mn = min(mn,v[i]);
    }
    ll lo=1, hi=mn*1LL*t;
    ll ans = -1;
    while(lo<=hi){
    	ll mid = lo + (hi-lo)/2;
    	ll temp=0;
    	For(i,n){
    		temp += (ll)(mid/v[i]);
    	}
    	//cout<<temp<<nl;
    	if(temp>=t){
    		ans = mid;
    		hi = mid-1;
    	}else{
    		lo = mid+1;
    	}
    }
    cout<<ans<<nl;

return 0;
}
