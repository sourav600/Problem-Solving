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
	int n,x; cin>>n;
	int posi=0, nega=0;
	For(i,n){
		cin>>x;
		if(x==1) ++posi;
		else ++nega;
	}
	//cout<<posi<<" "<<nega<<nl;
	if(posi >= nega){
		if(nega&1)cout<<1<<nl;
		else cout<<0<<nl;
	} 
	else{
		int need=0;
		if((nega-posi) & 1){
			need = (nega-posi+1)/2;
		}else{
			need = (nega-posi)/2;
		}

		cout<<need+(n-(need+posi))%2<<nl;
		// int ans = ((n+1)/2)-posi;
		// 	cout<<ans+ (n-ans+posi)%2<<nl;
		// 	cout<<(n/2)-posi+((n/2)%2)<<nl;
	}
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}



