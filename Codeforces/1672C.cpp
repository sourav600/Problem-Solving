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
    int k,n;
    cin>>k>>n;
    int gap = 1,diff=n-k,ans=1;
    cout<<1<<" ";
    for(int i=2;i<=k;++i){
        if(gap<=diff && ans+gap+1<=n){
            ans += gap+1;
            diff-=gap;
            gap++;
        }
        else ++ans;

        cout<<ans<<" ";
    }
    
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