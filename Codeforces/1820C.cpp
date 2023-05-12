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
    vl v(n);
    set<ll> s;
    ll mx=0;
    For(i,n) {
        cin>>v[i];
        s.insert(v[i]);
        mx = max(mx,v[i]);
    }
    ll mex=mx+1;
    int p=0;
    for(auto it=s.begin();it!=s.end();++it){
        if(*it != p) {
            mex=p;
            break;
        }
        ++p;
    }
    cout<<mex<<nl;
    if(mex==mx+1) cout<<"NO\n";
    else{
        s.clear();
        
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