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
    int n,sum=0; cin>>n;
    vi v(n+1);
    v[0]=0;
    bool isPossible = false;
    For(i,n){
        cin>>v[i];
        if(v[i]==-1 && v[i-1]==-1) isPossible=true;
        sum+=v[i];
    }
    if(isPossible){cout<<sum+4<<nl;}
    else if(sum<n) cout<<sum<<nl;
    else cout<<sum-4<<nl;
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