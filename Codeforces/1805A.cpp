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

    int n,x; cin>>n;
    vi v(n);
    int ans = 0;
    For(i,n){
        cin>>v[i];
        ans = ans^v[i];
    }
    //cout<<ans<<nl;
    int ans2 = 0;
    For(i,n){
        ans2 ^= (ans^v[i]);
    }
    if(ans2==0)cout<<ans<<nl;
    else cout<<-1<<nl;
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