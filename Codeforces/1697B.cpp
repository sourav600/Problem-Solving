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

    vl v;
    int n,q,x,a,b;
    while(cin>>n>>q){
        For(i,n){cin>>x; v.pb(x);}
        sort(v.begin(), v.end(),greater<int>());
        For(i,n)v[i+1] += v[i];
        For(i,q){
            cin>>a>>b;
            if(a==b) cout<<v[a-1]<<nl;
            else cout<<v[a-1]-v[a-b-1]<<nl;
        }
    }

return 0;
}