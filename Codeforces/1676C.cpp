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
    vs v;
    string s;
    int t,n,m; cin>>t;
    while(t--){
        cin>>n>>m;
        For(i,n){
            cin>>s;
            v.pb(s);
        }
        int count=100000;
        For(i,n){
            for(int j=i+1; j<n; j++){
                int sum=0;
                For(k,m){
                    sum += abs(v[i][k]-v[j][k]);
                }
                count = min(count,sum);
            }
        }
        cout<<count<<nl;
        v.clear();
    }
return 0;
}
