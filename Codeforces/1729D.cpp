#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;
const ll M = 1000000007;

void solve(int tc){
    int n,count=0; cin>>n;
    vi x(n),y(n),R(n);
    For(i,n)cin>>x[i];
    For(i,n){
        cin>>y[i];
        R[i]=y[i]-x[i];
    }
    sort(R.begin(),R.end());
    int l=0,r=n-1;
    while(l<r){
        if(abs(R[l]) > R[r]) {l++; continue;}
        else{
            count++;
            l++;
            r--;
        }
    }
    cout<<count<<nl;
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