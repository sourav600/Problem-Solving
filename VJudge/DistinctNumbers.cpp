#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,x; cin>>n;
    set<ll> st;
    for(ll i=0;i<n;++i){
        cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<"\n";
    
return 0;
}