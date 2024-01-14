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
const ll N = 2e5 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}



void SOURAV(int tc){
    int n,k,x; cin>>n>>k>>x;
    vi v(n);
    For(i,n) cin>>v[i];
    sort(allr(v));

    int add=0, sub=0;
    int it1=0, it2=x;
    for(int j=it1; j<x;++j) sub += v[j];
    for(int j=it2; j<n; ++j) add += v[j];
    //cout<<add<<" "<<sub<<nl;

    int mx = add - sub;
    //cout<<mx<<nl;
    for(int i=0; i<n; ++i){
        if(i>=k) break;
        if(i==n-1) mx = max(mx,0);
        sub -= v[i];
        if(i+x < n) {
            sub += v[i+x];
            add -= v[i+x];
        }
        mx = max(mx, add-sub);
    }
    cout<<mx<<nl;
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



