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
    ll x,y; cin>>x>>y;
    ll mx = max(x,y);
    ll sum;
    if(mx&1){
        if(x<y){
            sum = mx*mx;
            cout<<sum-x+1<<nl;
        }
        else{
            sum =(mx-1)*(mx-1);
            cout<<sum+y<<nl;
        }
    }
    else{
        if(x>y){
            sum = mx*mx;
            cout<<sum-y+1<<nl;
        }
        else{
            sum =(mx-1)*(mx-1);
            cout<<sum+x<<nl;
        }
    }

}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}