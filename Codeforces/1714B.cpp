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
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    unordered_map<int ,int> m;
    vi v;
    int t,n; cin>>t;
    while(t--){
        int x,check=0;
        cin>>n;
        For(i,n){cin>>x;v.pb(x);}
        
        for(int i=v.size()-1; i>=0;--i){
            m[v[i]]++;
            if(m[v[i]]==2){cout<<i+1<<nl; check=1; break;}
        }
        if(check==0) cout<<"0"<<nl;
        m.clear(); v.clear();
    }
return 0;
}