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
    int n; cin>>n;
    cin.ignore();
    string s; cin>>s;

    vi ct(26,0);
    int mx = 0;
    For(i,n){
        ct[s[i]-'a']++;
    }
    int i=0, j=1;
    while(i<26 && j<26){
        if(ct[i]==ct[j]){
            ct[i]=0;
            ct[j]=0;
            i = max(i,j)+1;
            j = max(i,j)+2;
        }
        else if(ct[i] > ct[j]){
            ct[i] -= ct[j];
            ct[j] = 0;
            j = max(i,j)+1;
        }
        else{
            ct[j] -= ct[i];
            ct[i]=0;
            i = max(i,j)+1;
        }
    }

    ll ans = 0;
    For(k,26) ans+= ct[k];
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



