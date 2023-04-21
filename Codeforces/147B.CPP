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
    vi a(n),b(n);
    For(i,n)  cin>>a[i];
    For(i,n)  cin>>b[i];
    int l=0, r=n-1;
    while(r>=l){
        if(a[l]!=b[l] && a[r]!=b[r]) break;
        if(a[l]==b[l]) ++l;
        if(a[r]==b[r]) --r;
    }
    int mn = b[l];
    int mx = b[r];

    //cout<<mn<<nl;
    while(l>0){
        if(a[l-1]==b[l-1] && a[l-1]<=mn) {
            mn = min(mn,a[l-1]);
            --l;
        }
        else break;
    }
    while(r+1<n){
        if(a[r+1]==b[r+1] && a[r+1]>=mx) {
            mx = max(mx,a[r+1]);
            ++r;
        }
        else break;
    }
    cout<<l+1<<" "<<r+1<<nl;
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