#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;
const ll M = 1000000007;

void solve(int tc){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    ll l=a*1LL*d, r=b*1LL*c;
    if(l==r) cout<<0<<nl;
    else if(a==0 || c==0 || l%r==0 || r%l==0)cout<<1<<nl;
    else cout<<2<<nl;

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--)
        solve(tc++);

return 0;
}