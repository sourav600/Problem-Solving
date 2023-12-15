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


ll mod(ll a){ return ((a%M)+M)%M;}
struct hash_pair {
   template <class T1, class T2>
   size_t operator()(const pair<T1, T2>& p) const{
      auto hash1 = hash<T1>{}(p.first);
      auto hash2 = hash<T2>{}(p.second);
      return hash1 ^ hash2;
   }
};



void SOURAV(int tc){
    ll a,b;
    cin>>a>>b;
    ll xk,yk; cin>>xk>>yk;
    ll xq, yq; cin>>xq>>yq;

    unordered_map<pair<int, int>, int, hash_pair> um;
    vector<pair<int,int> > movements = { {a,b},{a,-b},{-a,b},{-a,-b},{b,a},{-b,a},{b,-a},{-b,-a} };
    ll ct=0;

    for(auto movement : movements){
        ll x = xk+movement.first;
        ll y = yk+movement.second;
        // cout<<x<<" "<<y<<nl;
        um[{x,y}] = 1;
    }
    for(auto movement : movements){
        ll x = xq+movement.first;
        ll y = yq+movement.second;
        if(um[{x,y}] == 1) {
            ++ct;
            um.erase({x,y});
        }
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



