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
    vi v(n);
    For(i,n) cin>>v[i];
    int x; cin>>x;
    int l=0,r=0, sum=v[0];
    while(l!=n-1 || r!=n-1){
        if(sum==x) {
            cout<<l<<" "<<r<<nl;
            return;
        }
        if(l==r){
            ++r;
            sum+=v[r];
        }
        else if(sum<x) {
            ++r; 
            sum+=v[r];
        }
        else {
            sum-=v[l];
            ++l;
        }
    }
    cout<<"s"<<l<<" "<<r<<nl;
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