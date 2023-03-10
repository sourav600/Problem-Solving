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
    vi v(n);
    For(i,n) cin>>v[i];

    int m=n;
    while(v[m-1]==2) --m;

    int ans = 0,temp=0, r=0;
    For(i,m){
        if(v[i]==1) {
            ++r;
            ++temp;
        }
        else {
            if(r>1) temp = r/2 +1;
        }
        ans = max(ans,temp);
    }
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