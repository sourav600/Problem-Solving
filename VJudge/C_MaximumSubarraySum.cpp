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
    ll n; cin>>n;
    vl v(n+1);
    For(i,n) cin>>v[i];
    ll mx = -INF;
    ll temp=0;
    int l=0,r=0;
    For(i,n){
        temp+=v[i];
        mx = max(temp,mx);
    
        if(temp<=0) {
            temp=0;
        }
    }
    cout<<mx<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif


    solve();

return 0;
}