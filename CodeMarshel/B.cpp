#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)



int main(){

    int t; cin>>t;
    for(int j=1; j<=t;++j){
        cout<<"Case "<<j<<": ";
        int n;
        ll k;
        ll mx=0,sum=0;
        cin>>n>>k;
        vector<ll> v(n);
        For(i,n){
            cin>>v[i];
            sum+=v[i];
            mx= max(v[i],mx);
        }
        cout<<sum+((k-1)*mx)<<nl;
    }

return 0;
}