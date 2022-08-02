#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

const ll M = 1e9+7;
ll gcd(ll a, ll b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
ll binExpRecr(ll a, ll b){
    if(b==0) return 1;
    ll r=binExpRecr(a,b/2);
    if(b%2) return (a*((r*r)%M))%M;
    else return (r*r)%M;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int n; cin>>n;
    vi v(n);
    For(i,n) cin>>v[i];
    ll fx=1,gx=0;
    For(i,n){
        fx = (v[i]*fx)%M;
        gx = gcd(gx,v[i]);
    }
    cout<<binExpRecr(fx,gx)<<nl;
    
return 0;
}