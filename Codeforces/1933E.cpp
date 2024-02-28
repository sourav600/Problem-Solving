#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=1; i<=n; i++)
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
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
const ll N = 1e6 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}

ll sum(ll n){
    return ((n*(n+1)) / 2);
}

void SOURAV(int tc){
    ll n; cin>>n;
    vl v(n+1), prefix(n+1,0), ans;
    For(i,n) {
        cin>>v[i];
        prefix[i] = prefix[i-1] + v[i];
    }
    int q; cin>>q;
    while(q--){
        int l,u; cin>>l>>u;
        ll val = u+prefix[l-1];
        int pos = lower_bound(prefix.begin(), prefix.end(), val) - prefix.begin();
        if(pos > n) pos = n;
        if(prefix[pos] > val) --pos;
        if(pos<l) pos=l;
        ll ans = sum(u) - sum(u - (prefix[pos]-prefix[l-1]));

        for(int i=pos+1; i<=n; ++i){
            ll temp = sum(u) - sum(u - (prefix[i]-prefix[l-1]));
            if(temp>ans){
                ans = temp;
                pos = i;
            }

        }
        cout<<pos<<" ";
    }
    //for(auto it: ans) cout<<it<<" ";
        cout<<nl;
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



