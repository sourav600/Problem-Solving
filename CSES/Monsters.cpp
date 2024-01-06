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
vector<char> moves = {'D','U','R','L'};
ll mod(ll a){ return ((a%M)+M)%M;}

int n,m;
char g[1001][1001];
bool vis[N];
int parent[1001][1001], lvl[N];

bool isValid(int x, int y){
    return x>=0 && y>=0 && x<n && y<m && g[x][y]=='.';
}

void bfs(){
    queue<pair<int,int>> q;
    int x,y;
    For(i,n){
        For(j,m){
            if(g[i][j]=='M') q.push({i,j});
            else if(g[i][j]=='A') {
                x=i;
                y=j;
            }
        }
    }
    q.push({x,y});
    parent[x][y] = -1;

    while(!q.empty()){
        auto cur = q.front();
        q.pop();

        x = cur.first;
        y = cur.second;

        if(g[x][y]=='A' && (x==0 || y==0 || x==n-1 || y==m-1)){
            cout<<"YES\n";
            string ans = "";
            int d = parent[x][y];
            while(d!=-1){
                ans += moves[d];
                x -= movements[d].first;
                y -= movements[d].second;
                d = parent[x][y];
            }
            cout<<ans.size()<<nl;
            for(int i=ans.size()-1; i>=0; --i)cout<<ans[i];
                cout<<nl;
            return;
        }

        int it=-1;
        for(auto movement: movements){
            ++it;
            int dx = x + movement.first;
            int dy = y + movement.second;
            if(isValid(dx,dy)){
                g[dx][dy] = g[x][y];
                if(g[dx][dy]=='A') parent[dx][dy] = it;
                q.push({dx,dy});
            }
        }
    }
    cout<<"NO\n";
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    cin>>n>>m;
    For(i,n){
        For(j,m) cin>>g[i][j];
    }
    bfs();

return 0;
}



