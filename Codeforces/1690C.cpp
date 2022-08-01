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
    vi v1,v2;
    int t,n,x; cin>>t;
    while(t--){
        cin>>n;
        For(i,n){cin>>x; v1.pb(x);}
        For(i,n){cin>>x; v2.pb(x);}

        cout<<v2[0]-v1[0]<<" ";
        for(int i=1; i<n; i++){
            if(i>1)cout<<" ";
            cout<<v2[i]-max(v1[i],v2[i-1]);
        }
        cout<<nl;
        v1.clear(); v2.clear();
    }
return 0;
}