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

    vi v1,v2;
    int t,n,k,x;
    cin>>t;
    while(t--){
        cin>>n>>k;
        For(i,n){
            cin>>x;
            v1.pb(x);
        }
        For(i,n-2){
            v2.pb(v1[i+1]-v1[i]-v1[i+2]);
        }
        int count=0;
        For(i, v2.size()){
            if(v2[i]>0) count++;
        }
        cout<<count<<nl;
        v1.clear();
        v2.clear();
    }
return 0;
}