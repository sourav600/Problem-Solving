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
    cin.ignore();
    string s; cin>>s;
    int x=0,y=0;
    For(i,n){
        if(s[i]=='L') --x;
        else if(s[i]=='R') ++x;
        else if(s[i]=='U') ++y;
        else if(s[i]=='D') --y;
        
        if(x==1 && y==1){cout<<"YES\n"; return;}
    }
    cout<<"NO\n";
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