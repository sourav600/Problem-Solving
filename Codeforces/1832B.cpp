#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,a,n) for(int i=a; i<=n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

typedef long long ll;
typedef unsigned long long  ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const ll M = 1e9 + 7;
const ll N = 1e5 + 10;

void solve(int tc){
    ll n,k;
    cin>>n>>k;
    vl v(n+1),prefix(n+1,0);
    ll sum=0;
    For(i,1,n) cin>>v[i];
    sort(v.begin(),v.end());
    For(i,1,n) prefix[i] = prefix[i-1]+v[i];

    // For(i,1,n) cout<<prefix[i]<<" ";
    // cout<<nl;

    ll l = k*2, r=n;
    while(l>=0){
        sum = max(sum, prefix[r]-prefix[l]);
        --r;
        l-=2;
    }
    cout<<sum<<nl;

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}