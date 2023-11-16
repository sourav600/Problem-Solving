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
    ll n,w,x; cin>>n>>w;
    ll total_m = w;
    //sum, mass, force
    vector<pair<ll, pair<ll, ll> > > vpp;
    vl v(n);
    For(i,n) {
        cin>>v[i];
        total_m+=v[i];
    }
    For(i,n){
        cin>>x;
        vpp.push_back({x+v[i], {v[i],x}});
    }
    sort(vpp.rbegin(), vpp.rend());
    // For(i,n){
    //     cout<<vpp[i].first<<" "<<vpp[i].second.first<<" "<<vpp[i].second.second<<nl;
    // } cout<<nl;
    ll ans = -1, total_f=0;
    for(int i=0; i<n; ++i){
        total_m -= vpp[i].second.first;
        total_f += vpp[i].second.second;
        //cout<<total_m<<" "<<total_f<<nl;
        if(total_m <= total_f) {
            cout<<i+1<<nl;
            return;
        }
    } cout<<-1<<nl;
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



