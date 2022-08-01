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
    int t,n,x; cin>>t;
    while(t--){
        int count=0;
        cin>>n;
        For(i,n){
            cin>>x;
            v.pb(x);
        }
        for(int i=v.size()-1;i>0;i--){
            if(v[i]<i) {count=-1; break;}
            while(v[i]<=v[i-1]){v[i-1] /= 2; count++;}
        }
        cout<<count<<nl;
        v.clear();
    }

return 0;
} 