#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
const ll M = 1e9 + 7;
const ll N = 2e5 + 10;

int dp[102][1000001];
int func(int idx, int val, vector<int>& coins){
    if(val==0) return 1;
    if(idx<0) return 0;
    if(dp[idx][val]!=-1) return dp[idx][val];

    int ways = 0;
    for(int coin_amount=0; coin_amount<=val; coin_amount+=coins[idx]){
        ways = (ways+func(idx-1, val-coin_amount, coins))%M;
    }
    return dp[idx][val] = ways;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    memset(dp,-1, sizeof(dp));
    int n,x; cin>>n>>x;
    vector<int> coins(n);
    For(i,n) cin>>coins[i];
    cout<<func(n-1, x, coins)<<nl;

return 0;
}
