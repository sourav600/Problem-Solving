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
    int n,m;
    cin>>n>>m;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = min(n,m);
    if((a==1&&b==1)||(c==1&&d==1)||(a==1&&b==m)||(c==1&&d==m)||(a==n&&b==1)||(c==n&&d==1)||(a==n&&b==m)||(c==n&&d==m)) ans=min(ans,2);
    else if(a==1 || b==1 || c==1 || d==1||a==n||c==n||b==m||d==m) ans=min(ans,3);
    else ans = min(ans,4);
    cout<<ans<<nl;
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