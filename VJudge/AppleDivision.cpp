#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'



int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n; cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; ++i) cin>>v[i];


    //cout<<(1<<0)<<nl;
    ll ans = INT_MAX;
    for(int i=0; i < (1<<n);++i){
        ll a=0,b=0;
        //bitset<5> x(i);
        //cout<<x<<nl;
        for(int j=0; j<n; ++j){
            if(i & (1<<j)){
                a+=v[j];
            }else{
                b+=v[j];
            }
        }ans = min(ans, abs(a-b));
    }cout<<ans<<nl;

return 0;
}