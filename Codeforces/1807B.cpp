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
    vi even,odd;
    int a=0,b=0;
    For(i,n){
        cin>>x;
        if(x&1) {
            odd.pb(x);
            b+=x;
        }
        else {
            even.pb(x);
            a+=x;
        }
    }
    if(b>=a) cout<<"NO\n";
    else cout<<"YES\n";

    

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