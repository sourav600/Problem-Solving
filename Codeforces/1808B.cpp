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

void solve(int tc){
    ll n,m,x;
    cin>>n>>m;
    vector<ll> v[m];
    //cout<<v.size()<<nl;
    For(i,n){
        For(j,m){
            cin>>x;
            v[j].pb(x);
        }
    }
    ll sum = 0;
    For(i,m){
        sort(v[i].begin(),v[i].end());
        ll c_sum = v[i][0];
        for(int j=1;j<n;++j){
            sum+= abs(c_sum - (j)*v[i][j]);
            c_sum += v[i][j];
        }
        //cout<<nl;
    }
    cout<<sum<<nl;

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}