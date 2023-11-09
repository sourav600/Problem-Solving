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
const ll N = 1e5 + 10;



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    int n; cin>>n;
    vi ans1(n,0), ans2(n,0);
    vector<pair<pair<int,int>, int> > vpp(n);

    int a,b;
    For(i,n){
    	cin>>a>>b;
    	vpp[i].first.first = a;
    	vpp[i].first.second = -b;
    	vpp[i].second = i;
    }
    sort(all(vpp));
    // for(int i=0; i<n; ++i){
    // 	cout<<vpp[i].first.first<<" "<<vpp[i].first.second<<" "<<vpp[i].second<<nl;
    // }

    int mn_end = INT_MAX;
    for(int i=n-1; i>=0; --i){
    	vpp[i].first.second = -vpp[i].first.second;
    	if(mn_end <= vpp[i].first.second) ans1[vpp[i].second] = 1;

    	mn_end = min(mn_end, vpp[i].first.second);
    }

    int mx_end = 0;
    for(int i=0; i<n; ++i){
    	if(mx_end >= vpp[i].first.second) ans2[vpp[i].second] = 1;

    	mx_end = max(mx_end, vpp[i].first.second);
    } 
    For(i,n) cout<<ans1[i]<<" ";
    cout<<nl;
    For(i,n) cout<<ans2[i]<<" ";
    cout<<nl;

return 0;
}





