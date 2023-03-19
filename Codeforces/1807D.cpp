#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=1; i<=n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;

void solve(int tc){
    ll n,q;
    cin>>n>>q;
    vl v(n+1,0);
    For(i,n){
        cin>>v[i];
    }
    for(int i=2; i<=n;++i) {
        v[i]+=v[i-1];
    }
    // For(i,n) cout<<v[i]<<" ";
    // cout<<nl;
    ll l,r,k;
    For(i,q){
        cin>>l>>r>>k;
        ll rep = k*(r-l+1);
        ll rm = v[l-1] + v[n] - v[r];
        //cout<<rep<<" "<<rm<<nl;
        if((rm+rep)&1) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
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