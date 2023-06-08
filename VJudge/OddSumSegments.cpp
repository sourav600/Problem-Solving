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
	int n,k;
	cin>>n>>k;
	vi v(n),odd_idx;
	For(i,n) cin>>v[i];
	int odd_ct = 0;
	For(i,n){
		if(v[i]&1){
		    ++odd_ct;
		    odd_idx.push_back(i+1);
		}
	}
	
	if(odd_ct>=k && k%2==0 && odd_ct%2==0){
		cout<<"YES\n";
		For(i,k-1){
			cout<<odd_idx[i]<<" ";
		}
		cout<<n<<nl;
	}else if(odd_ct>=k && k%2==1 && odd_ct%2==1){
		cout<<"YES\n";
		For(i,k-1){
			cout<<odd_idx[i]<<" ";
		}
		cout<<n<<nl;
	}else{
		cout<<"NO\n";
	}
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