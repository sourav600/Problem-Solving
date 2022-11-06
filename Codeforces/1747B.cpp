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
    string s="BAN";
    For(i,n-1)s+="BAN";
    //cout<<s<<nl;
    vector< pair<int,int> > vp;
    int l=0,r=(3*n)-1;
    while(l<r){
        if(s[l]=='A' && s[r]=='N'){
            vp.pb(make_pair(l+1,r+1)); 
            l++; --r;
            continue;  
        }
        if(s[l]!='A') ++l;
        if(s[r]!='N') --r; 
    }
    cout<<vp.size()<<nl;
    For(i,vp.size()){
        cout<<vp[i].first<<" "<<vp[i].second<<nl;
    }
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