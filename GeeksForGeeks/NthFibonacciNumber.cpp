#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;
const ll M = 1000000007;


class Solution {
ll mod(ll a){
    return ((a%M)+M)%M;
}
ll solve(ll n, long *dp){
    if(n==1||n==2) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=mod(solve(n-1,dp)+solve(n-2,dp));
}
public:
    long long int nthFibonacci(long long int n){
        long *dp = new long[(int)n+1];
        for(int i=0;i<=n;i++) dp[i]=-1;
        return solve(n,dp);
    }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }

return 0;
}