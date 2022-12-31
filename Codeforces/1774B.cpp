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
    int n,m,k,x;
    cin>>n>>m>>k;
    int diff = ceil(n/(k*1.0));
    bool isPossible=true;
    int count=0;
    For(i,m){
        cin>>x;
        if(diff==x)++count;
        if(x>diff) isPossible=false;
    }
    if((n%k!=0) && count>(n%k)){cout<<"NO\n"; return;}

    if(isPossible) cout<<"YES\n";
    else cout<<"NO\n";
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