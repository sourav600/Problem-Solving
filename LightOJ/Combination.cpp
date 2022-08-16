#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;
const ll M = 1000003;

ll mod(ll a){
    return ((a%M)+M)%M;
}
ll binExpRecr(ll a, ll b){
    if(b==0) return 1;
    ll r = mod(binExpRecr(a,b/2));
    if(b&1) return mod(a*r*r);
    else return mod(r*r);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    vl fact(M);
    fact[0]=1;
    for(int i=1; i<M;++i){
        fact[i] = mod(fact[i-1]*1LL*i);
    }
    int t,n,r; cin>>t;
    For(i,t){
        cin>>n>>r;
        ll dm = mod(fact[r] * fact[n-r]);
        dm = binExpRecr(dm, M-2);
        ll ans = mod(fact[n] * dm);
        cout<<"Case "<<i+1<<": "<<ans<<nl;
    }

return 0;
}