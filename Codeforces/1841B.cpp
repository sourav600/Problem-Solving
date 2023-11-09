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
	int n; cin>>n;
	vi v(n);
	For(i,n) cin>>v[i];
	int ct=0,mn=INT_MAX,last=v[0];
	
	cout<<1;
	for(int i=1;i<n;++i){
		if(last <= v[i]) {
			if(ct==0){
				cout<<1;
				last = v[i];
			}
			else{
				if(v[i]>=last && v[i] <= v[0]){
					cout<<1;
					last = mn = v[i];
				}
				else if(v[i]==mn) {
					cout<<1;
					last = mn;
				}
				else if(v[i]==v[0]){
					mn = v[0];
					cout<<1;
					last = v[0];
				}
				else cout<<0;
			}
		}
		else if(last > v[i] && ct==0){
			if(v[i] <= v[0]) {
				cout<<1;
				ct=1;
				mn = v[i];
				last = v[i];
			}
			else cout<<0;
		}
		else cout<<0;
	}

	cout<<nl;
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