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
    int a=2*n, b=2;
    For(i,n/2){
        cout<<a<<" "<<b<<" ";
        a-=2; b+=2;
    }
    cout<<nl;
    a=(2*(n-1))-1;
    b= 1;
    For(i,n/2){
        if(i==n/2-1) cout<<b<<" "<<2*n-1<<nl;
        else cout<<b<<" "<<a<<" ";
        a-=2; b+=2;
    }
    

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