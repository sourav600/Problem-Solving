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
    int n; cin>>n;
    vi v(n), mark(n),ans(n,-1);
    For(i,n) cin>>v[i];
    mark=v;
    sort(mark.begin(),mark.end());

    int mx = INT_MIN;
    For(i,n){
        mx = max(v[i],mx);
        if(mx!=v[i]){
            int temp = mx-v[i];
            auto it = lower_bound(mark.begin(),mark.end(),temp);
            ans[*it-1]=i+1;
            mark.erase(it);
        } 
    }
    For(i,n){
        if(ans[i]==-1){cout<<1<<" "; continue;}
        cout<<ans[i]<<" ";
    }
    cout<<nl;
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