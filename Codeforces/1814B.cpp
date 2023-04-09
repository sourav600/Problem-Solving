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
    int a,b;
    cin>>a>>b;
    int xx=a, yy = b;
    int n = min(max(a,b),100000);
    for(int i=1; i<=n;++i){
        xx = min(xx,(a/i)+i-1);
        yy = min(yy,(b/i)+i-1);
        cout<<xx<<" "<<yy<<nl;
    }
    cout<<xx+yy<<nl;
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