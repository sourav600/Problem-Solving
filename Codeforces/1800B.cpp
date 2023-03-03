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
    int n,k; cin>>n>>k;
    cin.ignore();
    string s; cin>>s;
    unordered_map<char,int> um;
    int ct=0;
    for(int i=0;i<s.size();++i){
        if(s[i]>='a' && s[i]<='z'){
            if(um[s[i]-32]>0) {
                ++ct;
                --um[s[i]-32];
            }
            else um[s[i]]++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            if(um[s[i]+32]>0) {
                ++ct;
                --um[s[i]+32];
            }
            else um[s[i]]++;
        }
    }
    if(k!=0){
        for(auto it: um){
            if(k==0) break;
            int temp = it.second;
            if(temp>1){
                ct += min(temp/2,k);
                k-=min(temp/2,k);
            }
        }
        
    }
    cout<<ct<<nl;
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