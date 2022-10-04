#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;
const ll M = 1000000007;

void solve(int tc){
    int n,k; cin>>n>>k;
    unordered_map<int, int> um;
    vi v(n);
    For(i,n){
        cin>>v[i];
        um[v[i]] = i+1;
    }
    sort(v.begin(),v.end());
    int count=0;
    For(i,k){
        if(um[v[i]]>k) ++count;
    }
    cout<<count<<nl;
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