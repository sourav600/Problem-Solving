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
    For(i,n) cin>>v[i];
    if(n%2){cout<<"NO\n"; return;}
    ll temp=0;
    for(int i=0;i<n;i+=2){
        if(v[i]%2 || v[i]<temp){cout<<"NO\n"; return;}
        temp=v[i];
    }
    temp=0;
    for(int i=1;i<n;i+=2){
        if(v[i]%2==0 || v[i]<temp){cout<<"NO\n"; return;}
        temp=v[i];
    }
    cout<<"YES\n";
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