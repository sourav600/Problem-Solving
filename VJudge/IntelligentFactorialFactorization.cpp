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

unordered_map<int,int> um;
vi primes;
void primeFactor(ll a){
	for(ll i=2; i*i<=a; ++i){
		if(a%i==0){
			if(um[i]==0) primes.push_back(i);
			while(a%i==0){
				++um[i];
				a /= i;
			}
		}
	}
	if(a>1){ //last prime number check
		if(um[a]==0) primes.push_back(a);
		++um[a];
	}
}
void SOURAV(int tc){
	um.clear();	primes.clear();
	int n; cin>>n;

	cout<<"Case "<<tc<<": "<<n<<" = ";
	for(int i=2; i<=n;++i){
		primeFactor(i);
	}
	int k=0;
	for(auto p : primes){
		if(k!=0) cout<<" * ";
		++k;
		cout<<p<<" "<<"("<<um[p]<<")";
	}cout<<nl;

}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    SOURAV(tc++);

return 0;
}



