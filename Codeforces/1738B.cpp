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
#define allr(x) x.rbegin(), x.rend()
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
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1};int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction
ll mod(ll a){ return ((a%M)+M)%M;}

bool isValid(vl v){
    bool flag = true;
    for(int i=0; i<v.size()-1; ++i){
        if(v[i]>v[i+1]) return false;
    }
    return true;
}

void SOURAV(int tc){
    ll n,k; cin>>n>>k;
    vl v(k), vv(n,0);
    For(i,k) cin>>v[i];
    if(k==1) {
        cout<<"YES\n";return;
    }
    ll it = n-1;
    for(ll i=k-1; i>0; --i){
        vv[it] = v[i]-v[i-1];
        if(it!=n-1 && vv[it] > vv[it+1]){
            cout<<"NO\n";
            return;
        }
        --it;
    }
    // for(auto p :vv) cout<<p<<" ";
    // cout<<nl;
    ll mx = vv[n-k+1], r = v[0];
    for(ll i=1; i<=n-k;++i){
        vv[i] = mx;
        r -= mx;
    }
    vv[0] = r;
        // for(auto p :vv) cout<<p<<" ";
        // cout<<nl;
    isValid(vv) ? cout<<"YES\n" : cout<<"NO\n";
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



