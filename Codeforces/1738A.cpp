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
    vi a(n);
    ll ans=0;

    For(i,n) cin>>a[i];

    vl fire,frost;
    ll x;

    For(i,n){
        cin>>x;
        if(a[i]==0) fire.pb(x);
        else frost.pb(x);
    }

    sort(fire.begin(),fire.end());
    sort(frost.begin(),frost.end());

    int i=fire.size()-1, j=frost.size()-1;
    while(i>=0 && j>=0){
        ans += ((fire[i]*2)+(frost[j]*2));
        --i; --j;
    }
    while(i>=0) ans+=fire[i--];
    while(j>=0) ans+=frost[j--];

    if(fire.size()==frost.size()) ans -= min(fire[0],frost[0]);
    cout<<ans<<nl;
    fire.clear();
    frost.clear();
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