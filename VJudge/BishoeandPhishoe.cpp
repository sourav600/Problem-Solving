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
const ll N = 2000000+1;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}


bool mark[N];
void seive() {
	mark[0] = mark[1] = 1;
    for (int i = 4; i <= N; i += 2) {
        mark[i] = 1;
    }

    for (int i = 3; i*i <= N; i += 2) {
        if (mark[i] == 0) {
            for (int j = i * i; j <= N; j += i)
                mark[j] = 1;
        }
    }
}

void SOURAV(int tc){
	seive();
	int n; cin>>n;
	vi v(n);
	ll ans = 0;
	For(i,n) cin>>v[i];

	//Find next prime, because next prime number is always greater/ equal phi number.
	For(i,n){
		int k = v[i]+1;
		while(1){
			if(mark[k]==0){
				ans += k;
				break;
			}
			++k;
		}
	}
	cout<<"Case "<<tc<<": "<<ans<<" Xukha"<<nl;
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



