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
    int n,s,r;
    cin>>n>>s>>r;
 
    cout<<s-r<<" ";
    int mx = s-r;
    int ans = r/(n-1);
    int rm = r%(n-1);
    //cout<<ans+rm<<" ";
    For(i,n-1){
        if(rm!=0){
            cout<<ans+1<<" ";
            --rm;
        }
        else cout<<ans<<" ";
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