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
ll mod(ll a){ return ((a%M)+M)%M;}

void SOURAV(int tc){
    ll n,m; cin>>n>>m;
    ll x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;

    ll dis = x2 - x1;
    if(dis<=0) cout<<"Draw\n";
    else if(dis&1){
        ll x = (dis/2)+1;
        ll axr = min(m, y1+x),
           axl = max(1LL, y1-x);
        ll bxr = min(m, y2+x-1),
           bxl = max(1LL, y2-x+1);

        //cout<<axl<<" "<<axr<<" "<<bxl<<" "<<bxr<<nl;
        if(axr>=bxr && axl<=bxl) cout<<"Alice\n";
        else cout<<"Draw\n";
    }
    else{
        ll x = (dis/2);
        ll axr = min(m, y1+x),
           axl = max(1LL, y1-x);
        ll bxr = min(m, y2+x),
           bxl = max(1LL, y2-x);
        //cout<<axl<<" "<<axr<<" "<<bxl<<" "<<bxr<<nl;
        if(axr<=bxr && axl>=bxl) cout<<"Bob\n";
        else cout<<"Draw\n";
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



