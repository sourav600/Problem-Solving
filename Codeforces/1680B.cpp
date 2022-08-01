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

        int temp=0,check=0;
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<v[i].size();j++){
                if(v[i][j]=='R' && temp==0) temp=j+1;
                else if(v[i][j]=='R'){
                    if(j<temp-1){check=1;break;}
                }
            }
        }
        check==0?cout<<"YES\n": cout<<"NO\n";
        v.clear();
        
    }

return 0;
}