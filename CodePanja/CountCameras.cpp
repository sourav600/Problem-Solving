#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define For(i,n) for(ll i=0; i<n; i++)
#define vl vector<ll>
        
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    
    ll n,q;
    cin>>n>>q;
    vl v(n);
    vl::iterator it1,it2;
    For(i,n) cin>>v[i];
    sort(v.begin(), v.end());
    
    ll a,b;
    For(i,q){
        cin>>a>>b;
        ll lb1 = lower_bound(v.begin(),v.end(),a) - v.begin();
        ll lb2 = lower_bound(v.begin(),v.end(),b) - v.begin();
        it1 = lower_bound(v.begin(),v.end(),a);
        it2 = lower_bound(v.begin(),v.end(),b);

        if(it1==v.end() && it2==v.end()){ cout<<0<<nl; continue;}
        else if(it2==v.end()) lb2 = n-1;
        else if(!binary_search(v.begin(),v.end(),b)==v.end()) --lb2;

        cout<<(lb2-lb1)+1<<nl;
    }
return 0;
}
