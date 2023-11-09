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

unordered_map<ll,ll> um;

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


void SOURAV(int tc){
	ll n;	cin>>n;
	ll x,k;
	ll num=1,ct=1, sum=1;
	For(i,n){
		cin>>x>>k;
		um[x] = k;
	}
	for(auto it : um){
		ct = mod(ct*(it.second+1));

		ll numeretor = mod(binExpIter(it.first,it.second+1)-1);
		ll denominator = mod(binExpIter(it.first-1, M-2));
		sum = mod(sum*mod(numeretor*denominator));
	}	
	for(auto)
	num = mod(num*(binExpIter(x,k)));
	

	
	
	ll power = binExpIter(num, (ct/2));;
	cout<<ct<<" "<<sum<<" "<<power<<nl;
	
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1;
    SOURAV(tc++);

return 0;
}
