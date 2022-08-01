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

    vector<int> v;
    
    int t,n,x; cin>>t;
    while(t--){
        cin>>n;
        For(i,n){cin>>x; v.pb(x);}
        sort(v.begin(), v.end());
        int ans=0;
        For(i,v.size()){
            ans += (v[i]-v[0]);
        }
        cout<<ans<<nl;
        v.clear();
    }

return 0;
}