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


void solve(ll tc){
    ll n; cin>>n;
    ll fact = 1;
    for(ll i=2;i<=n;++i) fact = (fact * i)%M;
    int sum = (n*(n-1))%M;
    cout<<(fact*sum)%M<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    ll t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}