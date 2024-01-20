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
const ll N = 2e5 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}

void SOURAV(int tc){
    ll n; cin>>n;
    vl v(n+1);
    For(i,n) cin>>v[i];
    vi closest(n+1);
    closest[1]=1;
    closest[n] = -1;
    for(int i=2;i<n; ++i){
        int x = abs(v[i]-v[i+1]);
        int y = abs(v[i]-v[i-1]);
        if(x>y) closest[i] = -1;
        else closest[i] = 1;
    }
    vl prefix(n+1,0), postfix(n+1,0);

    prefix[1]=postfix[n]=0;
    for(int i=2; i<=n; ++i){
        if(closest[i-1]==1) prefix[i] = prefix[i-1]+1;
        else prefix[i] = prefix[i-1] + abs(v[i]-v[i-1]);
     }
     for(int j=n-1; j>=0; --j){
        if(closest[j+1]==-1) postfix[j] = postfix[j+1]+1;
        else postfix[j] = postfix[j+1] + abs(v[j]-v[j+1]);
     }
     // for(auto p: prefix) cout<<p<<" ";
     //    cout<<nl;
     // for(auto p: postfix) cout<<p<<" ";
    int m; cin>>m;
    For(i,m){
        int a,b; cin>>a>>b;
        if(a<b) cout<<prefix[b] - prefix[a]<<nl;
        else cout<<postfix[b]-postfix[a]<<nl;
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



