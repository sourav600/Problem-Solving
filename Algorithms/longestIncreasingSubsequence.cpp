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


vi v(N);
int dp[N];
int lis(int i){     //O(N^2)
    if(dp[i]!=-1) return dp[i];
    int ans = 1;
    for(int j=0; j<i; ++j){
        if(v[i] > v[j])
            ans = max(ans, lis(j)+1);
    }
    return dp[i]=ans;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n; cin>>n;
    For(i,n) cin>>v[i];

    memset(dp,-1, sizeof(dp));
    int ans = 1;
    for(int i=0; i<n; ++i){
        ans = max(ans, lis(i));
    }
    cout<<ans<<nl;

return 0;
}



