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
    vl v(n+1), a(n+1), pre_sum(n+1);
    v[0]=a[0]=pre_sum[0]=0;
    For(i,n){
        cin>>v[i];
        a[i] = v[i];
    }
    sort(a.begin(), a.end());
    For(i,n) pre_sum[i] = pre_sum[i-1]+a[i];

    unordered_map<ll,ll> um;
    um[a[n]] = n-1;

    ll ct=0;
    for(int i=n-1; i>=0; --i){
        if(pre_sum[i] >= a[i+1]){
            ++ct;
            um[a[i]] = max(um[a[i]] , ct+i-1);
        }
        else{
            ct = 0;
            um[a[i]] = max(um[a[i]] , ct+i-1);
        }
    }
    For(i,n) cout<<um[v[i]]<<" ";
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



