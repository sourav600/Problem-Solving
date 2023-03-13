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
    int n,k,d,w;
    cin>>n>>k>>d>>w;
    vi v(n);
    for(int i=0;i<n;++i) cin>>v[i];
    if(k==1) cout<<n<<nl;
    else{
        int ct=1,pack=1;
        int start = v[0];
        for(int i=1;i<n;++i){
            ct++;
            if(ct>k){
                start = v[i];
                pack++;
                ct=1;
            }
            else if(v[i]-start <= d) continue;
            else if((v[i]-w)-start > d){
                pack++;
                ct=1;
                start = v[i];
            }
        }
        cout<<pack<<nl;
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