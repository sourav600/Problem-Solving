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
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1};int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction
ll mod(ll a){ return ((a%M)+M)%M;}

void SOURAV(int tc){
    ll n,m,k; cin>>n>>m>>k;
    ll r = k;
    cin.ignore();
    string s; cin>>s;
    vl log,water,cro;
    log.push_back(0);

    for(int i=0; i<n; ++i){
        if(s[i]=='L'){
            log.push_back(i+1);
        }

        else if(s[i]=='C'){
            ll last_log = log.back();
            if((i+1)-last_log >= m) {cout<<"NO\n"; return;}
        }
    }
    log.push_back(n+1);
    // for(auto it: log) cout<<it<<" ";
    // cout<<nl;
    for(int i=0; i<log.size()-1;++i){
        ll a = log[i], b = log[i+1];
        ll need = b-a;
        ll r = need-m;
        if(r<0) continue;
        else{
            if(r>k) {cout<<"NO\n"; return;}
            else k-=r;
        }
    }
    cout<<"YES\n";
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



