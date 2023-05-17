#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=1; i<=n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define vpp vector<pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
const ll INF = 1e9 + 7;
const ll N = 1e5 + 10;



int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll n; cin>>n;
    vl v(n), mod(n,0);
    ll  c_sum=0;
    for(int i=0;i<n;++i){
        cin>>v[i];
        c_sum+=v[i];
        mod[((c_sum % n) + n) % n]++;
    }

    ll ct=0;
    for(int i=0; i<n;++i){
        ct += (mod[i] * (mod[i] - 1)) / 2;
    }
    cout<<ct+mod[0]<<nl;

return 0;
}