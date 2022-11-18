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
    int n,s; cin>>n>>s;
    vi v(n);
    For(i,n) cin>>v[i];
    sort(v.begin(),v.end());
    int mn = v[0], mx=v[n-1],sum=0;
    for(int i=1; i<=mx;++i){
        auto it = find(v.begin(),v.end(),i);
        if(it==v.end()) sum+=i;
    }
    //cout<<sum<<nl;
    while(sum<s){
        sum+= (++mx);
    }
    if(sum==s) cout<<"YES\n";
    else cout<<"NO\n";

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