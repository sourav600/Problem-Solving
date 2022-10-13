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
    vl v(n);
    unordered_map<ll, int> um;
    For(i,n) cin>>v[i];
    bool isPossible = true;

    For(i,n){
        um[v[i]]++;
        if(um[v[i]]>1) {
            isPossible=false;
            cout<<"NO\n"; return;
        }
    }
    if(isPossible) cout<<"YES\n";
    um.clear();
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