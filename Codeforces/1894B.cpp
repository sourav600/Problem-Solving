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
    int n; cin>>n;
    vi v(n), ans(n);
    vi ct[101];
    set<int> s;
    For(i,n) {
        cin>>v[i];
        ct[v[i]].push_back(i);
        if(ct[v[i]].size() >=2) s.insert(v[i]);
    }
    if(s.size()<2) cout<<"-1\n";
    else{
        int x = 2;
        bool ok = false;
        For(i,101){
            if(ct[i].size()>=2){
                if(!ok)ans[ct[i][0]] = 1;
                else ans[ct[i][0]] = 3;
                for(int j=1; j<ct[i].size(); ++j){
                    ans[ct[i][j]] = x;
                    if(x==3) ok=true;
                }
                x=3;
            }
            else{
                For(j,ct[i].size()) ans[ct[i][j]] = 1;
            }
        }
        for(auto it: ans) cout<<it<<" ";
        cout<<nl;
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



