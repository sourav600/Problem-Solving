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
    string s;
    cin>>s;
    //cout<<s<<nl;
    int ct=0;
    if(s.size()==1){
        if(s[0]=='_') cout<<2<<nl;
        else cout<<1<<nl;
    }
    else if(s.size()==2){
        if(s=="__") cout<<3<<nl;
        else if(s=="^_") cout<<1<<nl;
        else if(s=="_^") cout<<1<<nl;
        else if(s=="^^") cout<<0<<nl;
    }
    else{
        if(s[0]=='_')++ct;
        if(s[s.size()-1]=='_')++ct;

        for(int i=1;i<s.size()-1;++i){
            if(s[i]=='_' && s[i-1]=='_'){
                ++ct;
            }
        }
        if(s[s.size()-1]=='_' && s[s.size()-2]=='_') ++ct;
        cout<<ct<<nl;
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