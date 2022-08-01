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
    int t,n,x; cin>>t;
    while(t--){
        int check=0, temp;
        cin>>n;
        For(i,n){ cin>>x; v1.pb(x);}
        For(i,n){ cin>>x; v2.pb(x);}
        temp = v1[0]-v2[0];
        For(i,n) {if(v2[i]!=0 && v1[i]>=v2[i]){temp=v1[i]-v2[i]; break;}}
        //cout<<temp<<nl;;
        For(i,n){
            if(v1[i]<v2[i]) {cout<<"NO\n"; check=1;break;}
            else if(v1[i]-v2[i]!=temp && check==0){
                if(v2[i]!=0 && v1[i]-v2[i]<temp){cout<<"NO\n"; check=1;break;}
                else if(v1[i]-v2[i]>temp) {cout<<"NO\n"; check=1;break;}
            }
        } 
        if(check==0) cout<<"YES\n";
        v1.clear(); v2.clear();
    }

return 0;
}