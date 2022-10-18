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
    vi v;
    int n,mx=0; 
    char c;
    string s;
    cin>>n>>c>>s;
    if(c=='g'){cout<<0<<nl; return;}
    else{
        s = s+s;
        For(i,2*n){
            if(s[i]=='g')v.pb(i+1);
        }
        For(i,n){
            if(s[i]==c){
                int ub = lower_bound(v.begin(),v.end(),i+1)-v.begin();
                mx = max(mx,v[ub]-(i+1));
            }
        }
        cout<<mx<<nl;
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