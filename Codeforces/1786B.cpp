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
    int n,w,h;
    cin>>n>>w>>h;
    vi a(n),b(n),diff(n);
 
    For(i,n) cin>>a[i]; 
    For(i,n) cin>>b[i]; 
        
    int l=INT_MIN,r=INT_MAX;
    For(i,n){
        l = max(l, a[i]-w-b[i]+h);
        r = min(r, a[i]+w-b[i]-h);
    }
    if(l>r)cout<<"NO\n";
    else cout<<"YES\n";
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