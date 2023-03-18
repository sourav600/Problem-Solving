#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;

void solve(int tc){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c-a > d-b || (c<a && d<b)) cout<<-1<<nl;
    else{
        if(b==d) cout<<a-c<<nl;
        else{
            ll ans = d-b;
            a+=ans;
            cout<<ans+(a-c)<<nl;
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}