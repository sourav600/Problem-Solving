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
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };

void SOURAV(int tc){
    ll n,k;
    cin>>n>>k;
    vl v(n);
    For(i,n) cin>>v[i];

    ll l=1, r=1e9;
    while(l<=r){
        ll mid = l+(r-l)/2;
        ll ans=0;
        For(i,n){
            ans += (v[i]+mid)*(v[i]+mid);
            if(ans>k) break;
        }
        if(ans==k){
            cout<<" "<<mid/2<<nl;
            return;
        }else if(ans > k){
            r = mid-1;
        }else l = mid+1;
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
    SOURAV(tc++);

return 0;
}



