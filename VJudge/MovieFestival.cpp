#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,n) for(int i=1; i<=n; i++)
#define For(i,a,n) for(int i=a; i<=n; i++)
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

    int t,tc=1; cin>>t;
    int s,e, end = 0, ans=0;
    vpi vp;
    while(t--){
    	cin>>s>>e;
    	vp.push_back({e,s});
    }
    sort(vp.begin(),vp.end());
    //for(auto it : vp) cout<<it.first<<" "<<it.second<<nl;

    for(auto it : vp){
    	if(it.second < end) continue;
    	++ans;
    	end = max(end,it.first);
    }
    cout<<ans<<nl;

return 0;
}