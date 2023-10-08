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

bool vis[N];
void SOURAV(int tc){
    ll n,p,x;
    cin>>n>>p;
    vl a(n), b(n);


    vector<pair<ll,ll> > vp;
    ll ct=1, ans=0;
    For(i,n) cin>>a[i];
    For(i,n){
        cin>>x;
        vp.push_back({x,a[i]});
    }
    sort(all(vp));
    //For(i,n) cout<<vp[i].first<<" "<<vp[i].second<<nl;
    for(auto it: vp){
        if(it.first < p){
            if(ct >= n) {
                cout<<ans+p<<nl;
                return;
            }
            if(ct<n){
                ans += (min(it.second, n-ct)*it.first);
                ct += it.second;
                //cout<<ans<<nl;
            }
        }
    }
    //cout<<ct<<" ";
    if(ct<n){
        ans += (n-ct)*p;
        //cout<<ans<<nl;
    }
    ans += p;
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



