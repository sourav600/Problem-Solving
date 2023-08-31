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

void SOURAV(int tc){
	string s1, s2;
	cin>>s1>>s2;
	ll n = s1.size();
	ll prev=-1, cur=-1;
	bool match = true;
	bool one=false;


	if(s1==s2){
		cout<<"YES\n";
		return;
	}
	For(i,n){
		if(s1[i]!=s2[i]){
			match = false;
			if(one) prev=1;
			else prev = 0;

		}
		else if(match==false && s1[i]==s2[i]){
			cur = s1[i]-'0';
			if(cur==0 || prev==1) {
				match=true;
				cur=prev=s1[i]-'0';
			}
		}
		else if(s1[i]==s2[i]){
			if(s1[i]=='1') {
				one=true;
				cur = s1[i]-'0';
			}
		}
	}
	if(match) cout<<"YES\n";
	else cout<<"NO\n";
	
	

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    SOURAV(tc++);

return 0;
}



