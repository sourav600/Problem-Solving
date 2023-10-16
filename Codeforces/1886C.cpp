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
    string s; cin>>s;
    ll n; cin>>n;
    ll len = s.size();
    if(n<=len){
        cout<<s[n-1]<<nl;
        return;
    }

    ll lo=1, hi = len;
    ll blk = 1;
    while(lo<=hi){
        ll mid = (hi+lo)/2;

        ll temp = ((len + (len-mid+1))*mid)/2;
        if(temp >= n){
            blk = mid;
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    --blk;
    ll idx = n - ((len + (len-blk+1))*blk)/2;
    cout<<blk+1<<" "<<idx<<nl;

    string ans = "";
    ll ct=idx;
    for(int i=0; i<len; ++i){
        while(ans.size() && ans.back()>s[i] && ct ){
            --ct;
            ans.pop_back();
        }
        ans.push_back(s[i]);
    }
    //cout<<ans<<nl;
    cout<<ans[idx-1];
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



