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
#define allr(x) x.rbegin(), x.rend()
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

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,x; cin>>n>>x;
    vi v(n);
    unordered_map<int,queue<int> >um;
    um.reserve(1024);
    um.max_load_factor(0.25);
    For(i,n){
        cin>>v[i];
        um[v[i]].push(i+1);
    }
    sort(all(v));

    for(int i=0; i<n-2; ++i){
        int rm = x-v[i];
        int l=i+1, r=n-1;

        while(l<r){
            //cout<<rm<<v[l]<<v[r]<<nl;
            if(v[l]+v[r] == rm){
                cout<<um[v[i]].front()<<" ";
                um[v[i]].pop();
                cout<<um[v[l]].front()<<" ";
                um[v[l]].pop();
                cout<<um[v[r]].front()<<nl;
                return 0;
            }
            if(v[l]+v[r] > rm) --r;
            else ++l;
        }
    }
    cout<<"IMPOSSIBLE\n";

return 0;
}



