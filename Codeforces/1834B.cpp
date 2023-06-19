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
	string s1,s2;
	
	cin>>s1>>s2;
	int n = s1.size(), m = s2.size();

	string zero="";
	For(i,abs(n-m)) zero += "0";

	if(n>m){
		zero += s2;
		s2 = zero;
	}
	else{
		zero += s1;
		s1 = zero;
	}
	//cout<<s1<<" "<<s2<<nl;

	bool ok = false;
	ll ans = 0;
	For(i,max(n,m)){
		if(ok){
			ans += 9LL;
		}
		else if(s1[i]!=s2[i]){
			ok = true;
			ans += s2[i]-s1[i];
		}
	}cout<<ans<<nl;

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



