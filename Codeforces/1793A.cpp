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

void solve(int tc){
    ll a,b,n,m;
    cin>>a>>b>>n>>m;
    if(n<=m) cout<<n*min(a,b)<<nl;
    else if((a*m)/(m+1) >= b) cout<<n*b<<nl;
    else{
        ll ct = n/(m+1);
        ll r = n - (ct*(m+1));
        ll ans = ct*m*a;
        ans += (min(a,b) * r);
        cout<<ans<<nl;
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