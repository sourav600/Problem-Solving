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
    int n=s.size();
    int zero=0,one=0;
    if(s[0]=='0') zero++;
    else one++;

    int ct=0;
    for(int i=1;i<n;++i){
        if(s[i]=='1' && s[i-1]=='1') ++ct;
        else ct=0;
        if(ct>0) one = max(one,ct+1);
    }
    int l=0,r=s.size()-1,ct2=0;
    while(r>=l){
        if(s[l]=='0' || s[r]=='0') break;
        else if(r==l && s[r]=='1') ++ct2;
        else if(s[r]=='1' && s[l]=='1') ct+=2;

        --r; ++l;
    }
    one = max(one,ct2);
    cout<<one<<nl;
    // if(one==0) cout<<0<<nl;
    // else{
    //     int ans=1;
    //     int l2=2,r2=one-1;
    //     while(r2>=l2){
    //         ans = max(ans,r2*l2);
    //         --r2;++l2;
    //     }
    //     cout<<ans<<nl;
    // }
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