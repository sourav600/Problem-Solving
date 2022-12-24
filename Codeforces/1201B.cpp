#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ulong;
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
    int n; cin>>n;
    vl v(n);
    ulong sum = 0;
    For(i,n){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum&1){
        cout<<"NO\n";
        return;
    }
    ll mx = *max_element(v.begin(),v.end());
    ulong temp = sum - mx;
    if(temp<mx) {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    solve();

return 0;
}