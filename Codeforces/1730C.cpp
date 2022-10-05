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
    string s; cin>>s;
    int n = s.size();
    char mn = '9';
    for(int i=n-1;i>=0;--i){
        mn = min(mn,s[i]);
        if(s[i]>mn && s[i]!='9') s[i]++; 
    }
    sort(s.begin(),s.end());
    For(i,n) cout<<s[i];
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