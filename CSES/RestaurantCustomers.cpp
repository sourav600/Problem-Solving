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

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll n; cin>>n;

    vector<pair<ll,ll>> vp(n+1);
    set<ll> s;

    For(i,n){
        cin>>vp[i].first>>vp[i].second;
        s.insert(vp[i].first);
        s.insert(vp[i].second+1);
    }
    unordered_map<ll,ll> idx, rev;
    int k=1;
    for(auto it: s){
        idx[it] = k++;
        rev[k] = it;
    }
    vl prefix(2*n+1,0);
    For(i,n){
        prefix[idx[vp[i].first]]++;
        prefix[idx[vp[i].second+1]]--;
        //cout<<idx[vp[i].first]<<" "<<idx[vp[i].second+1]<<nl;
    }

    For(i,2*n){
        prefix[i] += prefix[i-1];
    }
    ll mx = INT_MIN;
    For(i,2*n) mx = max(mx,prefix[i]);
    cout<<mx<<nl;


return 0;
}



