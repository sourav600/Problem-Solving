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

    string s;
    int t; cin>>t;
    while(t--){
        cin>>s;
        int check=0;
        if((s[0]!='Y' && s[0]!='y')||(s[1]!='E' && s[1]!='e')||(s[2]!='S' && s[2]!='s')) cout<<"NO\n";
        else cout<<"YES\n";
    }

return 0;
}