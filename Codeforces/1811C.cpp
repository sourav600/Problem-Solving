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
    int n,x; cin>>n;
    vi v(n+10),v2(n+2);
    //For(i,n-1) cin>>v1[i];
    //v2[0]==v2[1]=
    For(i,n-1){
        cin>>x;
        if(i==0) v[i]=v[i+1]=x;
        else if(v[i]<=x) v[i+1]=x;
        else {
            v[i]=v[i+1]= x;
        }
    }
    For(i,n) cout<<v[i]<<" ";
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