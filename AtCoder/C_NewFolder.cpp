#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    unordered_map <string, int> um;
    string s;
    int t; cin>>t;
    while(t--){
        cin>>s;
        um[s]==0 ? cout<<s<<"\n" : cout<<s<<"("<<um[s]<<")\n";
        um[s]++;
    }
return 0;
}