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
const ll N = 2e6 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}

unordered_map<ll,ll>um_a, um_b, um_l;

bool mark[N];
vl primes;
void seive(){
    for(ll i=3; i*i<=N; i+=2){
        if(mark[i]==0){
            for(ll j=i*i; j<N; j += (i+i)){
                mark[j] = 1;
            }
        }
    }
    primes.push_back(2);
    for(ll i=3; i<N; i+=2){
        if(mark[i]==0) primes.push_back(i);
    }
}

ll binExpIter(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1){
            ans = (ans*a);
        }
        a = (a*a);
        b>>=1;
    }
    return ans;
}


void SOURAV(int tc){
	um_a.clear(); um_b.clear(); um_l.clear();
	cout<<"Case "<<tc<<": ";
	ll a,b,l;
	cin>>a>>b>>l;
	if(l%a!=0 || l%b!=0){
		cout<<"impossible\n";
	}else{
		for(int i=0; i<primes.size() && a>=primes[i]; ++i){
			while(a % primes[i] == 0){
				a /= primes[i];
				um_a[primes[i]]++;
			}
		} if(a>1) um_a[a]++;

		for(int i=0; i<primes.size() && b>=primes[i]; ++i){
			while(b % primes[i] == 0){
				b /= primes[i];
				um_b[primes[i]]++;
			}
		} if(b>1) um_b[b]++;

		for(int i=0; i<primes.size() && l>=primes[i]; ++i){
			while(l% primes[i] == 0){
				l /= primes[i];
				um_l[primes[i]]++;
			}
		} if(l>1) um_l[l]++;

		// for(auto it: um_a) cout<<it.first<<" "<<it.second<<nl;cout<<nl;
		// for(auto it: um_b) cout<<it.first<<" "<<it.second<<nl; cout<<nl;
		// for(auto it: um_l) cout<<it.first<<" "<<it.second<<nl;

		ll c = 1;
		for(auto it : um_l){
			ll a= it.first;
			ll b = it.second;

			ll mx = max(um_a[a], um_b[a]);
			if(mx<b) c *= binExpIter(a,b);
		}
		cout<<c<<nl;
	}

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    seive();
    int t,tc=1; cin>>t;
    while(t--)
    SOURAV(tc++);

return 0;
}



