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
    vi v(n);
    int zero=0;
    bool one=false, other = false;
    For(i,n){
        cin>>v[i];
        if(v[i]==0) ++zero;
        else if(v[i]==1) one = true;
        else other = true;
    }
    int r = n-zero;
    if(zero==0) cout<<0<<nl;
    else if(zero==n) cout<<1<<nl;
    else if(zero-r<=1 ) cout<<0<<nl;
    else{
        if(other){
            cout<<1<<nl;
        }
        else cout<<2<<nl;
    }
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