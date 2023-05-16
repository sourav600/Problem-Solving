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
#define vpp vector<pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
const ll INF = 1e9 + 7;
const ll N = 1e5 + 10;

void solve(int tc){
    int n,p,q;
    cin>>n>>p>>q;
    vi v(n+1);
    For(i,n) cin>>v[i];
    p=min(n,p);
    sort(v.begin(),v.end());

    int ct=0,wt=0,i=1;
    while(i<=n){
        wt += v[i++];
        if(wt>q) break;
        ++ct;
    }
    cout<<"Case "<<tc<<": "<<min(p,ct)<<nl;;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}