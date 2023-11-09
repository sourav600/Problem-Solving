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
    vl v(3);
    For(i,3) cin>>v[i];
    sort(all(v));

    set<ll> s;
    ll mn = v[0];
    s.insert(mn);
    int cut = 0;

    if(v[1]!=mn && v[1]-mn>0){
        ++cut;
        v[1] -= mn;

        if(v[1]!=mn && v[1]-mn>0){
            ++cut;
            v[1] -= mn;
        }
        if(v[1]!=mn && v[1]-mn>0){
            ++cut;
            v[1] -= mn;
        }
        s.insert(v[1]);
    }

    if(v[2]!=mn && v[2]-mn>0){
        ++cut;
        v[2] -= mn;

        if(v[2]!=mn && v[2]-mn>0){
            ++cut;
            v[2] -= mn;
        }
        if(v[2]!=mn && v[2]-mn>0){
            ++cut;
            v[2] -= mn;
        }
        s.insert(v[2]);
    }

    if(cut>3 || s.size()>1) cout<<"NO\n";
    else cout<<"YES\n";

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



