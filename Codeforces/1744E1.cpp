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
    ll a,b,c,d,x,y,i,j;
    cin>>a>>b>>c>>d;
    ulong ans = a*b;
    ulong high = c*d;
    while(ans<=high){
        for(ll i=a+1;i<=c;++i){
            if(ans%i==0){
                if((ans/i)>b &&  (ans/i)<=d){cout<<i<<" "<<ans/i<<nl; return;}
            }
        }
        ans += (a*b);
    }
    cout<<-1<<" "<<-1<<nl;
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