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
    int n; cin>>n;
    vi v(n);
    unordered_map<int , int > m;
    For(i,n){
        cin>>v[i];
        m[v[i]]=i;
    }

    int x = -1;;
    for(int i=n-1; i>0; --i){
        if(v[i]<v[i-1]){
            x = i-1; break;
        }
    }
    if(x==-1) {cout<<0<<nl; return;}
    int maxi = x;
    for(int i=0;i<=x;++i) maxi = max(maxi,m[v[i]]);

    set<int> s;
    for(int i=0;i<=maxi;++i) s.insert(v[i]);

    cout<<s.size()<<nl;
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