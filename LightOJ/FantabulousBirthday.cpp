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

    int t, loop=1; cin>>t;
    ll s;
    while(t--){
        ll n=1,m=1;
        cin>>s;
        ll r =  ceil(sqrt(s*1.0));
        //s-(r-1)*(r-1)
        
        if((r*r)-s >= r) {n = (2*r)-((r*r)-s+1); m=r;}
        else {n = r; m += (r*r)-s;}

        if(r%2) cout<<"Case "<<loop++<<": "<<m<<" "<<n<<nl;
        else cout<<"Case "<<loop++<<": "<<n<<" "<<m<<nl;
    }

return 0;
}