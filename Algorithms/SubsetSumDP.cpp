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

int dp[202][20005];

bool func(int idx,int val, vi &v){
    if(val==0) return true;
    if(idx < 0) return false;
    if(dp[idx][val] != -1) return dp[idx][val];

    bool ans = func(idx-1, val, v);
    if(val-v[idx] >= 0)
        ans |= func(idx-1, val-v[idx], v);
    return dp[idx][val] = ans;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    memset(dp,-1, sizeof(dp));
    int n, sum=0; cin>>n;
    vi v(n);
    For(i,n) {
        cin>>v[i];
        sum += v[i];
    }
    if(sum&1) cout<<"false\n";
    else {
        bool isValid = func(n-1,sum/2, v);
        cout<<(isValid ? "true" : "false" )<<nl;
    }


return 0;
}



