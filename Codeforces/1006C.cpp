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

void solve(){
    int n; cin>>n;
    vi v(n);
    For(i,n)cin>>v[i];
    ll l=0, r=n-1;
    ll sum1 = v[l], sum2 = v[r],mx=0;
    while(l<r){
        if(sum1==sum2) mx = max(mx,sum1);
        if(sum1<sum2) {
            ++l;
            sum1+=v[l];
        }
        else{
            --r;
            sum2+=v[r];
        }
    }
    cout<<mx<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    solve();

return 0;
}