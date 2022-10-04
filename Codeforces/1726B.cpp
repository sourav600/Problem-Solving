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
    int n,m; cin>>n>>m;
    int div = m/n;
    if(n>m) {cout<<"NO\n"; return;}
    else if(div*n==m){
        cout<<"Yes\n";
        For(i,n) cout<<m/n<<" ";
        cout<<nl;
    }
    else if(n%2==0 && m%2==0){
        cout<<"Yes\n";
        For(i,n-2) cout<<1<<" ";
        cout<<(m-(n-2))/2<<" "<<(m-(n-2))/2<<nl;
    }
    else if(n&1){
        cout<<"Yes\n";
        For(i,n-1) cout<<1<<" ";
        cout<<m-(n-1)<<nl;
    }
    else if(n%2==0 && m&1){
        cout<<"NO\n";
        return;
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