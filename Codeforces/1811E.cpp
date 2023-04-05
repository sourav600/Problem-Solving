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

string base10base9(ll x){
    string s = "";
    while(x>0){
        s = to_string(x%9) + s;
        x/=9;
    }
    return s;
}

void solve(int tc){
    ll n; cin>>n;
    string base9 = base10base9(n);
    For(i,base9.size()){
        if(base9[i]>'3') cout<<base9[i]-'0'+1;
        else cout<<base9[i];
    }
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