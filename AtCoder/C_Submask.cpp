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


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    cout<<0<<nl;
    for(int i=1;i<=n;++i){
        int k=i,check=0;
        for(int j=0; (1<<j)<=k; ++j){
            if(( (k& (1<<j))==1 && (n & (1<<j)))==1) continue;
            else {check=1;}
        }
        if(check==0) cout<<i<<nl;
    }


return 0;
}