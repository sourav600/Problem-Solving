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

    int n,m,x;
    cin>>n>>m>>x;
    vi a(n+1), b(m+1);
    For(i,n) cin>>a[i];
    For(i,m) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    // For(i,n) cout<<a[i]<<" ";
    // cout<<nl;
    // For(i,m) cout<<b[i]<<" ";
    int l1=1,r1=n,l2=1,r2=m,ct=0;

    while(1){
        if(l1>r1 || l2>r2 ) break;

        if(abs(a[l1]-b[l2]) <= x) {
            //cout<<"ok1\n";
            ++ct; ++l1; ++l2;
        }
        else{
            if(a[l1] > b[l2]) ++l2;
            else ++l1; 
        }
        if(l1>r1 || l2>r2 ) break;

        if(abs(a[r1]-b[r2]) <= x) {
            //cout<<"OK2\n";
            ++ct; --r1; --r2;
        }
        else{
            if(a[r1] > b[r2]) --r1;
            else --r2; 
        }
        
        if(l1>r1 || l2>r2 ) break;
    }
    cout<<ct<<nl;

return 0;
}