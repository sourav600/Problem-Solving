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

ll query (ll a,ll b){
    cout<<"? "<<a<<" "<<b<<nl;
    cout.flush();
    ll x; cin>>x;
    return x;
}

void solve(int tc){
    ll n,m; cin>>n>>m;
    ll dis = query(1,1)+1;
    if(dis==1) cout<<"! "<<1<<" "<<1<<nl;
    else if(dis>n){
        ll dis2 = query(1,dis)+1;
        cout<<"! "<<dis2<<" "<<dis<<nl;
    }
    else if(dis>m){
        ll dis2 = query(dis,1)+1;
        cout<<"! "<<dis<<" "<<dis2<<nl;
    }
    else{
        ll dis2 = query(dis,1)+1;
        ll dis3 = query(1,dis)+1;
        if(dis2>dis3) cout<<"! "<<dis3<<" "<<dis<<nl;
        else cout<<"! "<<dis<<" "<<dis2<<nl;
    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}