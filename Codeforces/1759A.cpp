#include<bits/stdc++.h>
#include <map>
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
    string s;
    cin>>s;
    unordered_map<char, int>um = {{'Y', 1},{'e', 2}, {'s',3}};
    if(um[s[0]]==0){cout<<"No\n"; return;}
    for(int i=1;i<s.size();++i){
        if(um[s[i]]==0 ) {cout<<"No\n"; return;}
        int x = um[s[i]] - um[s[i-1]];
        if(x!=-2 && x!=1) {cout<<"No\n"; return;}
    }
    cout<<"Yes\n";
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