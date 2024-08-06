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
const ll N = 1002;
vector<pair<int,int> > movements = { {+1,0},{0,+1} };
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1};int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction
ll mod(ll a){ return ((a%M)+M)%M;}

int n;
char arr[N][N];
int dp[N][N];

bool isValid(int x, int y){
    return x>=0 && y>=0 && x<n && y<n && arr[x][y]=='.';
}
ll func(int x, int y){
    if(x==n-1 && y==n-1) return 1;
    if(dp[x][y]!=-1)return dp[x][y];

    ll ans = 0;
    for(auto movement: movements){
        int dx = x+movement.first,
            dy = y+movement.second;
        if(isValid(dx,dy)){
            ans = mod(ans+func(dx,dy));
        }
    }
    return dp[x][y] = ans;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    memset(dp, -1, sizeof(dp));
    cin>>n;
    For(i,n){
        For(j,n) cin>>arr[i][j];
    }
    if(arr[0][0]=='*') cout<<0<<endl;
    else cout<<func(0,0)<<endl;

return 0;
}



