#include<bits/stdc++.h>
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

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t,l1,r1,l2,r2; cin>>t;
    while(t--){
        cin>>l1>>r1>>l2>>r2;
        if(l1==l2) cout<<l1<<nl;
        else if(l1<l2){
            if(l2<=r1) cout<<l2<<nl;
            else cout<<l1+l2<<nl;
        }
            else if(l2<l1){
            if(l1<=r2) cout<<l1<<nl;
            else cout<<l1+l2<<nl;
        }
    }

return 0;
}
