#include<bits/stdc++.h>
#include<set>

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
    int n ;cin>>n;
    cin.ignore();
    string s; cin>>s;
    unordered_map<char, int> um1, um2;

    vi prefix(n), suffix(n);
    int unique = 0;
    For(i,n){
        if(um1[s[i]] == 0){
            ++unique;
            ++um1[s[i]];
        }
        prefix[i] = unique;
    }
    unique = 0;
    for(int i=n-1; i>=0; --i){
        if(um2[s[i]] == 0){
            ++unique;
            ++um2[s[i]];
        }
        suffix[i] = unique;
    }

    int mx = 0;
    for(int i=0; i<n-1; ++i){
        mx = max(mx, prefix[i]+suffix[i+1]);
    }
    cout<<mx<<nl;

    // For(i,n) cout<<prefix[i]<<" ";
    // cout<<nl;
    // For(i,n) cout<<suffix[i]<<" ";
    // cout<<nl;
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
