#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int val[105], weight[105];
ll dp[105][100005];

ll knapsack(int pos, int wt_remain){
    if(wt_remain==0) return 0;
    if(pos<0) return 0;
    if(dp[pos][wt_remain] != -1) return dp[pos][wt_remain];

    ll ans = knapsack(pos-1, wt_remain);

    if(wt_remain - weight[pos] >= 0) {
        ans = max(ans, knapsack(pos-1, wt_remain-weight[pos])+val[pos] );
    }
    return dp[pos][wt_remain] = ans;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    memset(dp,-1,sizeof(dp));
    int n,w;
    cin>>n>>w;
    for(int i=0; i<n;++i){
        cin>>weight[i]>>val[i];
    }
    cout<<knapsack(n-1, w);
    

return 0;
}