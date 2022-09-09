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

void solve(int tc){
    int n; cin>>n;
    vi v(n);
    For(i,n) cin>>v[i];
    int maxi=INT_MIN, mini=INT_MAX,ans=INT_MIN;
    if(n==1){cout<<0<<nl; return;}
    For(i,n-1){
        maxi = max(v[i],maxi);
        mini = min(v[i],mini);
        ans = max(ans, v[i]-v[i+1]);
        //cout<<"ans1: "<<ans<<nl;
        ans = max(ans, max(maxi-v[0], v[n-1]-mini));
        //cout<<"ans2: "<<ans<<nl;
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