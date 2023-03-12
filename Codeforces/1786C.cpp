#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;
const ll N = 200000+10;

void solve(int tc){
    ll n,x; cin>>n;
    vl v(n);
    For(i,n) cin>>v[i];
    sort(v.begin(),v.end());
    ll ans = 0,ct=1;

    //for(auto it:v) cout<<it<<" ";

    For(i,n){
        while(v[i]==ct && v[i+1]==ct) ++i;
        if(v[i]!=ct){
            ans += v[i]-ct;
        }
        ++ct;
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