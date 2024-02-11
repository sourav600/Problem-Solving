#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--){
        ll n; cin>>n;
        if(n<4){
            cout<<"-1"<<endl;
            continue;
        }
        ll ans = 2;
        n-=4;
        ans += (n * (6 + (n-1)))/2;
        cout<<ans<<endl;
    }

return 0;
}



