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
    int t,n,q,x;
    cin>>t;
    while(t--){
        cin>>n>>q;
        For(i,n){cin>>x; v.pb(x);}
        sort(v.begin(), v.end(), greater<int>());
        
        For(i,q){
            int count=0;
            cin>>x;
            For(j,v.size()){
                if(x>0){
                    x -= v[j];
                    count++;
                }
            }
            if(x>0) cout<<"-1\n";
            else cout<<count<<nl;
        }
        v.clear();
    }
return 0;
}