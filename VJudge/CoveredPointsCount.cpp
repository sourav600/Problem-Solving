#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,n) for(int i=1; i<=n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define all(x) x.begin(), x.end()
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
const ll N = 2e5 + 10;



int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int n, k=0; cin>>n;

    set<ll> s;
    vector<pair<ll,ll> > vp(n+1);
    map<ll,ll> idx,rev;
    vl prefix(2*N , 0);

    For(i,n){
        cin>>vp[i].first>>vp[i].second;
        s.insert(vp[i].first);
        s.insert(vp[i].second + 1);
    }
    for(auto it : s){
        idx[it] = ++k;
        rev[k] = it;
    }
    For(i,n){
        prefix[idx[vp[i].first]]++;
        prefix[idx[vp[i].second + 1]]--;
    }
    For(i,2*n) prefix[i] += prefix[i-1];

    vl ans(n+1,0);
    for(int i=2;i<=k;++i){
        ans[prefix[i-1]] += (rev[i] - rev[i-1]);
    }

    For(i,n) cout<<ans[i]<<" ";
    cout<<nl;
return 0;
}
