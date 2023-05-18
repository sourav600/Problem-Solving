#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=1; i<=n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define vpp vector<pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
const ll INF = 1e9 + 7;
const ll N = 1e5 + 10;

void solve(){
    ll n,m;
    cin>>n>>m;
    vl v(n+1),prefix(n+1,0);
    For(i,n){
        cin>>v[i];
        prefix[i] = prefix[i-1]+v[i];
        cout<<prefix[i]<<" ";
    }
    cout<<nl;
    ll l=1,r=1,cut=0;
    ll ans=0;
    while(r<=n){
        if(prefix[r]-cut == m) {
            cout<<l<<" "<<r<<nl;
            ans++; ++r;
        }
        else if(prefix[r]-cut < m){
            ++r;
        }
        else if(prefix[r]-cut > m){
            cut = prefix[l];
            ++l;
        }
    }
    cout<<ans<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    solve();

return 0;
}