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
    int a,b;
        cin>>a>>b;
        if(a==1 || b==1) {cout<<a<<" "<<b<<nl;}
        else if(a==2 && b==3) cout<<1<<" "<<2<<nl;
        else if(a==3 && b==2) cout<<2<<" "<<1<<nl;
        else if(a==3 && b==3) cout<<2<<" "<<2<<nl;
        else cout<<a<<" "<<b<<nl;
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