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
    int n,x; cin>>n;
    vi v;
    v.push_back(-1);

    For(i,1,n){
        cin>>x;
        if(x!=v.back()) v.push_back(x);
    }
    
    // for( auto it : v) cout<<it<<" ";
    //     cout<<nl;

    int ans=1,i=1;
    n = v.size();

    while(i<n-1){
        if(v[i]>v[i+1]){
            ++ans;
            while(i<n-1 && v[i]>v[i+1]) ++i;
        }

        if(i<n-1 && v[i]<v[i+1]){
            ++ans;
            while(i<n-1 && v[i]<v[i+1]) ++i;
        }
    }
    cout<<ans<<nl;
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