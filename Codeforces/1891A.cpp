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
    int n; cin>>n;
    vi v(n+1);
    For(i,n) cin>>v[i];

    int mx_m;
    for(int i=0; i<n; ++i){
        if(pow(2,i) <= n) mx_m=i;
        else break;
    }

    for(int i= pow(2,mx_m)+1; i<n; ++i){
        if(v[i] > v[i+1]) {
            cout<<"NO\n";
            return;
        }
    }
    int x=2;
    for(int i=3; i<=pow(2,mx_m); ++i){
        if(i>x+1) x *=2;

        if(v[i-1] > v[i]) {
            if(i != x+1){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";

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



