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
    int n;
    cin>>n;
    int alice=0, bob=0;
    int x = 1;
    for(int i=1; n>0 ;++i){
        if(i&1){
            alice += min(x,n);
            n-=x;
            x+=4;
        }
        else{
            bob+=min(x,n);
            n-=x;
            x+=4;
        }
    }
    cout<<alice<<" "<<bob<<nl;
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