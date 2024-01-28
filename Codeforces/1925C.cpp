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
    int n,k,m; cin>>n>>k>>m;
    cin.ignore();

    string s; cin>>s;

    unordered_map<char, int> um;
    int ct=0, pos=0;
    string ans="";
    For(i,m){
        um[s[i]]++;
        if(um.size() == k){
            ++ct;
            ans += s[i];
            um.clear();
        }
    }
    if(ct>=n){
        cout<<"YES\n";
    }
    else{
        char r;
        For(i,k){
            if(um['a'+i]==0){
                r = 'a'+i;
                break;
            }
        }
        //cout<<r<<" "<<ans<<nl;
        int len = ans.size();
        For(i, n-len) ans += r;
        cout<<"NO\n";
        cout<<ans<<nl;
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



