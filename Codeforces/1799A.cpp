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
    int n,m; cin>>n>>m;
    int r = n;
    vi v(m+1),ans(n+1,-1);
    For(i,m) cin>>v[i];
    unordered_map<int, int> um;
    for(int i=1;i<=m;++i){
        if(r==0) break;
        if(um[v[i]]==0) {
            //cout<<r<<" "<<j<<nl;
            ans[r--] = i;
            um[v[i]]++;
        }
    }
    For(i,n) cout<<ans[i]<<" ";
    cout<<nl;
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