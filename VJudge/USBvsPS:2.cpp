#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,a,n) for(int i=a; i<=n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define all(x) x.begin(), x.end()
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

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
const ll N = 1e5 + 10;

void solve(int tc){

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    ll a,b,c,m;
    cin>>a>>b>>c>>m;
    vl usb,ps2;
    ll x;
    string s;
    For(i,1,m){
    	cin>>x>>s;
    	if(s=="USB") {
    		usb.push_back(x);
    	}else{
    		ps2.push_back(x);
    	}
    }
    //cout<<usb.size()<<" "<<ps2.size()<<nl;
    ll sz1 = usb.size(), sz2 = ps2.size();
    sort(all(usb));
    sort(all(ps2));

    ll amount = 0, ct=0;
    for( int i=0; i<(min(a,sz1)); ++i){
    	amount += usb[i];
    	++ct;
    }
    for( int i=0; i<(min(b,sz2)); ++i){
    	amount += ps2[i];
    	++ct;
    }

    ll i=min(a,sz1), j=min(b,sz2);

    while(c-- && ct<m){
    	++ct;
    	if(i<sz1 && j<sz2){
    		if(usb[i]<ps2[j]){
    			amount += usb[i++];
    		}else{
    			amount += ps2[j++];
    		}
    	}
    	else if(i<sz1){
    		amount += usb[i++];
    	}
    	else if(j<sz2) amount += ps2[j++];
    }
    cout<<ct<<" "<<amount<<nl;


return 0;
}