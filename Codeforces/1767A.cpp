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
    set<int> s1,s2;
    int a,b;
    For(i,3){
        cin>>a>>b;
        s1.insert(a);
        s2.insert(b);
    }
    if(s1.size()==1 || s2.size()==1){cout<<"NO\n"; return;}
    if(s1.size()==3 || s2.size()==3){cout<<"YES\n";}
    else cout<<"NO\n";
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