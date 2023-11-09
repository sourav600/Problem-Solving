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

void solve(){
    int n; cin>>n;
    int ct=0;
    for(int i=2; i<=n;i+=2) {cout<<i<<" ";++ct}
    if(n&1){
        int diff = 4;
        while(ct<n){
            for(int i=diff; i<=n; i+=diff)
        }
    }else{
        for(int i=3; i<=n;i+=4) cout<<i<<" ";
        for(int i=1; i<=n;i+=4) cout<<i<<" ";

    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    
    solve();

return 0;
}