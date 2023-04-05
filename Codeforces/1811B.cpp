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
    ll n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    --a; --b; --c;--d;
    int x1 = min(a,n-a-1);
    int y1 = min(b,n-b-1);
    int x2 = min(c,n-c-1);
    int y2 = min(d,n-d-1);

    cout<<abs(min(x1,y1)-min(x2,y2))<<nl;
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