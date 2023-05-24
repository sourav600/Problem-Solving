#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,a,n) for(int i=a; i<n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
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


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    string s;
    cin>>s;
    int k;
    cin>>k;
    vi v(26);
    int mx = 0;
    For(i,0,26){
    	cin>>v[i];
    	mx = max(mx,v[i]);
    }

    ll ans = 0;
    for(int i=0; i<s.size();++i) ans+= v[s[i]-'a'] * (i+1);
    //cout<<ans<<nl;
    for(int i=1; i<=k;++i){
    	ans += mx * (i+s.size());
    }
    cout<<ans<<nl;

    

return 0;
}