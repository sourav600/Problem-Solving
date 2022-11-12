#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=1; i<=n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;

void solve(int tc){
    int n; cin>>n;
    vi v(n+1);
    vector<pair<int,int> > vp;
    For(i,n) cin>>v[i];
    if(n&1) {cout<<-1<<nl; return;}
    for(int i=2;i<=n;i+=2){
        if(v[i-1]==v[i]) vp.push_back(make_pair(i-1,i));
        else {
            vp.push_back(make_pair(i-1,i-1));
            vp.push_back(make_pair(i,i));
        }
    }
    cout<<vp.size()<<nl;
    for(auto it : vp) cout<<it.first<<" "<<it.second<<nl;
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