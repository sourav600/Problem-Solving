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

double dist(int x1,int y1,int x2,int y2){
    double d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return d;
}

void SOURAV(int tc){
    int px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;

    double d1 = max(dist(ax,ay,0,0) , dist(ax,ay,px,py));
    double d2 = max(dist(bx,by,0,0) , dist(bx,by,px,py));
    double dis_ab = dist(ax,ay,bx,by);

    double ans = min(d1,d2);
    ans = min(ans, max( dis_ab/2, max(dist(ax,ay,0,0), dist(bx,by,px,py))));
    ans = min(ans, max( dis_ab/2, max(dist(bx,by,0,0), dist(ax,ay,px,py))));
    cout<<fixed<<setprecision(11)<<ans<<nl;
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



