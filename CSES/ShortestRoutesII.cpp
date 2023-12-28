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
const ll INF = 1e15;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}

ll dist[501][501];
int n,m,q;

void floyodWarshall(){
    For(i,501){
        For(j,501){
            if(i==j) dist[i][j] = 0;
            else dist[i][j] = INF;
        }
    }
    cin>>n>>m>>q;
    ll a,b,c;
    For(i,m){
        cin>>a>>b>>c;
        dist[a][b] = min(dist[a][b],c);
        dist[b][a] = min(dist[a][b],c);
    }
    for(int k=1; k<=n; ++k){
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=n; ++j){
                if(dist[i][k] != INF && dist[k][j]!=INF)
                    dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);


    floyodWarshall();
    int x,y;
    For(i,q){
        cin>>x>>y;
        dist[x][y]==INF ? cout<<-1<<nl : cout<<dist[x][y]<<nl;
    }

return 0;
}



