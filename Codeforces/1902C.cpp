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
    ll n; cin>>n;
    vl v(n), dist(n-1);
    For(i,n) cin>>v[i];
    if(n==1){
        cout<<1<<nl;
        return;
    }
    sort(all(v));
    ll gcd = 0;
    For(i,n-1){
        dist[i] = (v[i+1]-v[i]);
        gcd = __gcd(gcd, (v[i+1]-v[i]));
    }
    bool flag = false;
    For(i,n-1){
        if(dist[i]/gcd > 1) {
            flag=true;
            break;
        }
    }
    For(i,n-1) cout<<dist[i]<<" ";
    cout<<nl;
    ll ct=0;
    ll last = v[n-1]+gcd;
    if(flag) last -= gcd;

    For(i,n){
        ct += (last-v[i])/gcd;
    }
    cout<<ct<<nl;
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



