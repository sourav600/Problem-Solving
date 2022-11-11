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
    string s; cin>>s;
    ll zero=0,one=0,mx=0,mx1=0,mx0=0,x=0,y=0;
    For(i,n){
        if(s[i]=='1'){
            one++; 
            ++x;
            mx1 = max(mx1,x);
            y=0;
        }
        else{
            ++zero;
            ++y;
            mx0 = max(y,mx0);
            x=0;
        }
    }
    mx = max(one*zero , max(mx1*mx1, mx0*mx0));
    cout<<mx<<nl;
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