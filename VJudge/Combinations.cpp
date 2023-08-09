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
const ll M = 1000003;
const ll N = 2e5 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };

ll fact[M];

ll binExpIter(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1){
            ans = (ans*a)%M;
        }
        a = (a*a)%M;
        b>>=1;
    }
    return ans;
}


ll factorial(ll n){
	
	if(n==0 || n==1) return 1LL;
	else{
		if(fact[n]!=0) return fact[n];
		return fact[n] = ((n%M)*factorial(n-1)%M)%M;
	}
	
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll t,tc=1; cin>>t;

    ll n,k;
    while(t--){
		cin>>n>>k;

		ll dm = (factorial(k) * factorial(n-k))%M;
		dm = binExpIter(dm, M-2);
		ll ans = (factorial(n) * dm)%M;
		cout<<"Case "<<tc++<<": "<<ans<<nl;
    }

return 0;
}



