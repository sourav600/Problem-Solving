#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vi v;
    map<int,int> m;
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        For(i,n){cin>>x; v.pb(x); m[x]++;}
        int len = m.size();
        x = n-len;
        if(x%2) cout<<len-1<<nl;
        else cout<<len<<nl;
        v.clear();
        m.clear();
    }

return 0;
}