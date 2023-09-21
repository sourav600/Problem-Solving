#include<bits/stdc++.h>

using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()

typedef unsigned long long  ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const ll M = 1e9 + 7;
const ll N = 2e5 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}

void SOURAV(int tc){
    ll n,x; cin>>n>>x;
    vl v(n);
    For(i,n) cin>>v[i];

    ll l=0, r=INT_MAX, ans=x;

    while(l<=r){
        ll mid = (r+l)/2;
        //cout<<mid<<nl;

        ll temp=0;
        For(i,n){
            temp += max(0LL, mid-v[i]);
        }
        //cout<<temp<<nl;
        if(temp<=x){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout<<ans<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    SOURAV(tc++);

return 0;
}



