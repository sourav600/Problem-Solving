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

ll mod(ll a){
    return ((a%M)+M)%M;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    ll t,a,b; cin>>t;
    while(t--){
        cin>>a>>b;
        ll sum=a+b;
        if(sum&1)cout<<"Burenka\n";
        else cout<<"Tonya\n";
    }
return 0;
}