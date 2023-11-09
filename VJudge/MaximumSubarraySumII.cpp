#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=1; i<=n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define vpp vector<pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
const ll INF = 1e9 + 7;
const ll N = 1e5 + 10;

void solve(){
    ll n,a,b; cin>>n>>a>>b;
    vl v(n+1);
    For(i,n) cin>>v[i];
    ll mx = -INF;
    ll temp=0;
    ll l=1, r=1;
    for( int i=1; i<=n; i++){
        temp+=v[i];
        ll len = i-l+1;
        if(len>b){
            temp -= v[l];
            ++l;
            --len;
        }
        if(len>=a && len<=b ){
            if(temp>mx){
                mx =temp;
                r=i;
            }
            
        }
        if(temp<=0) {
            temp=0;
            l=i+1;
        }
        //cout<<temp<<" "<<len<<" "<<l<<" "<<r<<" "<<mx<<nl;
    }
    //cout<<l<<" "<<r<<nl;
    cout<<mx<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif


    solve();

return 0;
}