#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=1; i<=n; i++)
#define all(x) x.begin(), x.end()

typedef unsigned long long  ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const ll M = 1e9 + 7;
const ll N = 2e5 + 10;

void SOURAV(int tc){
    ll n,k; cin>>n>>k;
    vl v(n+1), h(n+1);
    bool isPossible = false;
    v[0]=0;
    For(i,n) {
        cin>>v[i];
        if(v[i] <= k) isPossible = true;
        v[i] += v[i-1];
    }
    For(i,n) {
        cin>>h[i];
    }

    ll mx=1,temp=0, ct= 1, sum=0;
    for(int i=2; i<=n; ++i){
        if(h[i-1]%h[i]==0){
            ++ct;
            if(v[i]-v[i-ct] <= k){
                mx = max(mx,ct);
            }
            else{
                ct--;;
            }
        }
        else {
            ct=1;
        }
    }
    if(mx==1){
        if(isPossible) cout<<1<<nl;
        else cout<<0<<nl;
    }
    else cout<<mx<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    SOURAV(tc++);

return 0;
}



