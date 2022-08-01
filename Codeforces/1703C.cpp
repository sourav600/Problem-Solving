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
    string s;
    int t,n,x; cin>>t;
    while(t--){
        cin>>n;
        vi v(n);
        For(i,n) cin>>v[i];
        For(i,n){
            cin>>x>>s;
            For(j,x){
                if(s[j]=='D') v[i] = (v[i]+1)%10;
                else{
                    v[i] = (v[i]==0) ? 9 : v[i]-1;
                }
            }
        }
        For(i,n)cout<<v[i]<<" ";
        cout<<nl;
    }

return 0;
}