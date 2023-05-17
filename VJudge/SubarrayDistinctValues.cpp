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

void solve(int tc){

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,m;
    cin>>n>>m;

    ll ans = 0;
    vl v(n+1);
    
    unordered_map<int, int> um;
    For(i,n){
        cin>>v[i];
    }
    if(m==1){
        cout<<n<<nl;
        return 0;
    }

    ll l=0,i=1, dist=1;
    um[v[i]]++;
    while(1){
        if(i>n) break;
        //cout<<dist<<" ";

        if(dist > m) {
            ++l;
            --um[v[l]];
            if(um[v[l]]==0) {
                --dist;
            }
        }
        else {
            ans += i-l-1;
            ++i;
            um[v[i]]++;
            if(i<=n && um[v[i]]==1) ++dist;
        }

        // if(i>n){
        //     int r = n-l-dist;
        //     ans+=r;
        //     break;
        // }
    }
    cout<<ans+n<<nl;

return 0;
}