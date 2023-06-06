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
const ll N = 2e5 + 10;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    int n,m;
    cin>>n>>m;
    vi cities(n), towers(m);
    For(i,n) cin>>cities[i];
    For(i,m) cin>>towers[i];
    
    ll lo=0,hi=2e9;
    ll ans = 0;
    while(lo<=hi){
        ll mid = lo+(hi-lo)/2;
        ll ci=0,ti=0;
        while(ci<n && ti<m){
            if(towers[ti]+mid >= cities[ci] && towers[ti]-mid <= cities[ci]){
                ++ci;
            }else{
                ++ti;
            }
        }
        if(ci>=n) {
            ans = mid;
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }
    cout<<ans<<nl;

return 0;
}




