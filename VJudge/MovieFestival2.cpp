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


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    
    int n,k;	cin>>n>>k;
    vpi v(n);
    For(i,n) cin>>v[i].second>>v[i].first;
    sort(all(v));
    //for(auto it: v) cout<<it.second<<" "<<it.first<<nl;
    //cout<<nl;

    multiset<int> endTime;
    int ans=0,fp=k;
    For(i,n){
    	if(endTime.empty()) {
    		endTime.insert(v[i].first);
    		++ans;
    		--fp;
    	}
    	else{
    		auto it = endTime.upper_bound(v[i].second);
    		if(it==endTime.begin()){
    			if(fp>0) {
    				++ans;
    				--fp;
    				endTime.insert(v[i].first);
    			}
    		}
    		else{
    			++ans;
    			endTime.erase(--it);
    			endTime.insert(v[i].first);
    		}
    	}
    }
    cout<<ans<<nl;

return 0;
}




