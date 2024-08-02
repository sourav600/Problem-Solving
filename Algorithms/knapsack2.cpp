#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 2e5+10;
ll wt[102], val[102];
ll dp[102][100005];

ll func(ll idx, ll val_left){
    if(val_left==0) return 0;
    if(idx<0) return 1e15;
    if(dp[idx][val_left] != -1) return dp[idx][val_left];

    ll ans = func(idx-1, val_left);

    if(val_left-val[idx] >= 0)
        ans = min(ans,func(idx-1, val_left-val[idx])+wt[idx] );

    return dp[idx][val_left] = ans;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    memset(dp, -1, sizeof(dp));
    int n,w; cin>>n>>w;
    for(int i=0; i<n; ++i) cin>>wt[i]>>val[i];

    for(int i=1e5; i>=0; --i){
        if(func(n-1, i) <= w){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
