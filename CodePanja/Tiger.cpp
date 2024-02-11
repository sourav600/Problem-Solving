#include<bits/stdc++.h>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t; cin>>t;
    while(t--){
        long long n, res1, res2; cin>>n;
        long long ans=0;
        for (int i = 1; i <= n; ++i)
        {
            ans=ans+i;
        }
        res2=ans+1;
        cout<<res2<<"\n";
    }

return 0;
}



