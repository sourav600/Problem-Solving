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
    string s,r;
    cin>>s;
    unordered_map<string,int> um;
    set<string> ss;
    for(int i=0; i<n-1; ++i){
        r = s.substr(0,i);
        um[r+s.substr(i+2)]++;
        //ss.insert(r+s.substr(i+2));
    }
    //for(auto it:um) cout<<it.first<<nl;
    cout<<um.size()<<nl;
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