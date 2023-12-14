#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
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

vector<pair<ll,ll>> v;
ll n;

bool check(ll m){
    if(v[0].first > m) return false;

    ll l= v[0].first;
    ll r= min(v[0].second, m);

    for(int i=1; i<n; ++i){
        l = l-m;
        r = r+m;
        bool flag = false;
        if(v[i].first <l && v[i].second>r) continue;
        if(v[i].first>=l && v[i].first<=r) flag=true;
        if(v[i].second>=l && v[i].second<=r) flag=true;

        if(flag){
            l = max(l, v[i].first);
            r = min(r,v[i].second);
        }
        else return false;
    }
    return true;
}
void SOURAV(int tc){
    v.clear();
    ll l,r; cin>>n;

    ll mx = INT_MIN;
    For(i,n){
        cin>>l>>r;
        mx = max(mx, max(l,r));
        v.push_back(make_pair(l,r));
    }
    ll ans = mx;
    ll lo=0, hi=mx;
    while(lo<=hi){
        ll mid = lo+(hi-lo)/2;

        bool flag = check(mid);
        if(flag){
            ans = mid;
            hi = mid-1;
        }
        else lo = mid+1;
    }
    cout<<ans<<nl;
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



