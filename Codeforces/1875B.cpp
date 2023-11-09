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

void SOURAV(int tc){
    ll n,m,k;
    cin>>n>>m>>k;
    vl a(n), b(m);

    ll mx_a = INT_MIN, mx_b = INT_MIN, mn_a=INT_MAX, mn_b = INT_MAX;
    ll sum=0;
    For(i,n){
        cin>>a[i];
        sum += a[i];
        mx_a = max(mx_a,a[i]);
        mn_a = min(mn_a,a[i]);
    }
    For(i,m){
        cin>>b[i];
        mx_b = max(mx_b,b[i]);
        mn_b = min(mn_b,b[i]);
    }

    if(k&1){
        ll add = max(0LL, mx_b - mn_a);
        cout<<sum+add<<nl;
    }
    else {
        ll add = max(0LL, mx_b - mn_a);
        mx_a = max(mx_a, mx_b);
        mn_b = min(mn_b,mn_a);
        sum += add;
        ll subs = max(0LL, mx_a - mn_b);
        cout<<sum-subs<<nl;
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



