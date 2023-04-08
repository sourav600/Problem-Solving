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

void solve(){
    int n,t;
    cin>>n>>t;
    vi v(n);
    For(i,n) cin>>v[i+1];
    int x = 1,i=1;
    while(x<n){
        x = i = i+v[i];
        if(x==t) {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    solve();

return 0;
}