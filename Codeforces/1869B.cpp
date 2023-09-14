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
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vpl v;
    For(i,n){
        ll x,y; cin>>x>>y;
        v.push_back({x,y});
    }

    if(a<=k && b<=k) cout<<0<<nl;
    else{
        ll dis = abs(v[a-1].first - v[b-1].first) + abs(v[a-1].second - v[b-1].second);
        ll dis1 = 1e15, dis2 = 1e15;
        For(i,k){
            dis1 = min(dis1, abs(v[a-1].first - v[i].first) + abs(v[a-1].second - v[i].second));
            dis2 = min(dis2, abs(v[b-1].first - v[i].first) + abs(v[b-1].second - v[i].second));
        }
        cout<<min(dis, dis1+dis2)<<nl;
    }
}
//01717 888 951

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



