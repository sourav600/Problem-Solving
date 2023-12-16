#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>

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
    ll n,k, mn = 1e18 + 1; cin>>n>>k;
    vl v(n);
    For(i,n) {
        cin>>v[i];
        mn = min(mn, v[i]);
    }

    if(k>=3) cout<<0<<nl;
    else if(k==1){
        sort(all(v));
        for(int i=0; i<n-1; ++i){
            mn = min(mn, abs(v[i]-v[i+1]));
        }
        cout<<mn<<nl;
    }
    else{
        sort(all(v));
        vl::iterator it1, it2;
        for(int i=0; i<n-1; ++i){
            for(int j=i+1; j<n;++j){
                ll temp = abs(v[i]-v[j]);
                mn = min(mn,temp);
                it1 = lower_bound(v.begin(), v.end(), temp);
                it2 = upper_bound(v.begin(), v.end(), temp);
                //cout<<temp<<" "<<it1-v.begin()<<" "<<it2-v.begin()<<nl;
                if(it1==v.begin()){
                    ll mn1 = min(mn, abs(temp-v[it2-v.begin()]));
                    ll mn2 = min(mn, abs(temp-v[it1-v.begin()]));
                    mn = min(mn, min(mn1,mn2));
                    //cout<<"1: "<<mn<<nl;
                }
                // else if(it2==v.end()){
                //     mn = min(mn, abs(temp-v[it1-v.begin()-1]));
                //     cout<<"2: "<<mn<<nl;
                // }
                else {
                    ll mn1 = min(mn, abs(temp-v[it2-v.begin()]));
                    ll mn2 = min(mn, abs(temp-v[it1-v.begin()]));
                    ll mn3 = min(mn, abs(temp-v[it1-v.begin()-1]));
                    mn = min(mn, min(mn1,min(mn2,mn3)));
                    //cout<<"3: "<<mn<<nl;
                }
            }
        }
        cout<<mn<<nl;
    }
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



