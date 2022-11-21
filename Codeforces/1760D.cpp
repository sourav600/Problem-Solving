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
    int n; cin>>n;
    vl v;
    ll x = INT_MIN,y;
    For(i,n){
        cin>>y;
        if(x!=y){v.pb(y);x=y;}
    }
    n=v.size();
    int count=0;
    if(n==1){cout<<"YES\n";return;}
    for(int i=1;i<n-1;++i){
        if(v[i]<v[i-1] && v[i]<v[i+1]) count++;
    }
    
    if(v[0]<v[1])count++;
    if(v[n-1]<v[n-2])++count;
    if(count==1)cout<<"YES\n";
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