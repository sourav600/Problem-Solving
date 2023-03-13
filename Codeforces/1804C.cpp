#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;



int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    vl v;
    for(int i=1;i<=2e5+10;++i){
        ll r = i*0.5*(i+1);
        v.pb(r);
    }
    int t; cin>>t;
    while(t--){
        bool check=false;
        long long n,x,p;
        cin>>n>>x>>p;
        for(int i=0;i<min(2*n,p); ++i){
            if((v[i]%n)+x == 0 ||  (v[i]%n)+x ==n) {
                //cout<<v[i]<<" ";
                check=true;
                break;
            }
        }
        if(check) cout<<"YES\n";
        else cout<<"NO\n";
    }
    

return 0;
}