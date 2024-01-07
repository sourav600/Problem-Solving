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
    int n; cin>>n;
    if(n==1) cout<<1<<nl;
    else{
        vi v = {169, 196, 961};
        For(i,3){
            cout<<v[i];
            For(i,n-3) cout<<0;
            cout<<nl;
        }
        int d=1;
        For(i,(n-3)/2){
            cout<<1;
            For(j,d) cout<<0;
            cout<<6;
            For(j,d) cout<<0;
            cout<<9;
            For(j,n-(2*d)-3) cout<<0;
            cout<<nl;

            cout<<9;
            For(j,d) cout<<0;
            cout<<6;
            For(j,d) cout<<0;
            cout<<1;
            For(j,n-(2*d)-3) cout<<0;
            cout<<nl;
            ++d;
        }
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



