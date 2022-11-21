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
    vl v,c;
    For(i,n){
        ll x;
        cin>>x;
        v.push_back(x);
        c.push_back(x);
    }
    sort(c.begin(),c.end());

    For(i,n){
        if(v[i]==c[n-1]) {
            cout<<v[i]-(c[n-2])<<" ";
        }
        else cout<<v[i]-(c[n-1])<<" ";
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