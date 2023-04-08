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
    ll n,k;
    cin>>n>>k;
    ll arr[n][n];
    For(i,n){
        For(j,n) cin>>arr[i][j];
    }
    ll f=0,l=n-1,ct=0;
    while(f<l){
        //int i=0,j=n-1;
        for(int i=0, j=n-1; i<n;++i,--j){
            if(arr[f][i]!=arr[l][j]) ct++;
        }
        ++f; --l;
    }
    if(n&1){
        ll mid = n/2;
        ll a=0,b=n-1;
        while(a<b){
            if(arr[mid][a] != arr[mid][b]) ++ct;
            ++a; --b;
        }
    }
    if(ct>k) cout<<"NO\n";
    else{
        if(n%2==0 && (k-ct)%2==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
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