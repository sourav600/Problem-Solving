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
    ll n,x;cin>>n;
    map<ll,ll> m;
    ll mn=INT_MAX, mx=INT_MIN;
    For(i,n){
        cin>>x;
        m[x]++;
        if(mn>x)mn=x;
        if(mx<x)mx=x;
    }
    if(mn==mx){
        cout<<m[mn]*(m[mn]-1)<<nl;
        return;
    }
    cout<<2*m[mn]*m[mx]<<nl;

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