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
    ll n; cin>>n;
    vl a(n+5),b(n+5),ans(n+5,0),preSum(n+5,0),cnt(n+5,0),add(n+2,0);
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=1;i<=n;++i) cin>>b[i];

    for(int i=1;i<=n;++i) preSum[i] = b[i]+preSum[i-1];

    for(int i=1;i<=n;++i){
        if(a[i] >= (preSum[n]-preSum[i-1])){
            cnt[i]++;
            cnt[n+1]--;
            continue;
        }
        int x = -1;
        int l=i, r=n;
        while(l<=r){
            int m = l+(r-l)/2;
            if(preSum[m]-preSum[i-1] <= a[i]) {
                x=m;
                l=m+1;
            }
            else r=m-1;
        }

        if(x==-1){
            add[i] += a[i];
        }
        else{
            cnt[i]++;
            cnt[x+1]--;
            int rm = a[i] - (preSum[x]-preSum[i-1]);
            if(x+1 <= n)
                add[x+1] += rm;
        }
    }
    For(i,n) cnt[i]+=cnt[i-1];
    For(i,n) cout<<cnt[i]*b[i] + add[i]<<" ";
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