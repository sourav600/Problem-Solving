#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(ll i=0; i<n; i++)
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



int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    vector<pair<ll, ll> > v;
    ll n; cin>>n;
    ll a,b;
    For(i,n){
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    ll finish = 0, ans=0;
    For(i,n){
        finish += v[i].first;
        ans += v[i].second - finish;
    }
    cout<<ans<<nl;

return 0;
}
