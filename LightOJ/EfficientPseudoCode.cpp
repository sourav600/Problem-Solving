#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef unsigned long ulong;
const ll M = 1000000007;
vector<ll> v;
unordered_map<ll,ll> um;
unordered_map<ll,ll>::iterator it;

ll mod(ll a){
    return ((a%M)+M)%M;
}

ll power(ll n, ll m){ 
    if(m==0) return 1; //base condition
    ll temp = mod(power(n,m/2));
    if(m&1) return mod(mod(n) * mod(temp*temp));
    else return mod(temp*temp);
}
void primeFactor(ll n){
    for(ll j=2; j*j<=n; ++j){
        if(n%j==0){
            v.pb(j);
            while(n%j==0){
                um[j]++;
                n/=j;
            }
        }
    }
    if(n>1){
        v.pb(n);
        um[n]++;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll t,n,m; cin>>t;
    For(i,t){
        v.clear(); um.clear();
        cin>>n>>m;
        primeFactor(n);
        for(auto p:v){
            um[p]*=m;
        }
        //for(it=um.begin();it!=um.end();++it)cout<<it->first<<" "<<it->second<<nl;
        ll ans=1;
        for(auto p:v){
            ll numeretor = power(p,um[p]+1) - 1;
            ll denominator = power(p-1,M-2);
            ans = mod(mod(ans)*mod(numeretor*denominator));
        }
        cout<<"Case "<<i+1<<": "<<ans<<endl;
    }
return 0;
}
