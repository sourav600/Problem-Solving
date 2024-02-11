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


int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,x,a;    cin>>n>>x;
    vi v(n);
    map<int, int> um;

    For(i,n)cin>>v[i];
    For(i,n){
        int r = x-v[i];
        if(um[r]){
            cout<<um[r]<<" "<<i+1<<nl;
            return 0;
        }
        else um[v[i]] = i+1;
    }
    cout<<"IMPOSSIBLE\n";


return 0;
}



