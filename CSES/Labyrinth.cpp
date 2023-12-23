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

// bool dfs(int x, int y){
//     if(g[x][y] == 'B') {
//         flag = true;
//         return true;
//     }
//     if(flag) return true;
//     if(vis[x][y]) return false;
//     vis[x][y] = true;

//     //cout<<x<<" "<<y<<nl;

//     for(auto movement : movements){
//         int dx = x + movement.first;
//         int dy = y + movement.second;

//         if(!isValid(dx,dy)) continue;
//         if(vis[dx][dy] || g[dx][dy]=='#') continue;
//         if(movement.first == 1 && !flag) ans.push_back('D');
//         if(movement.first == -1 && !flag) ans.push_back('U');
//         if(movement.second == 1 && !flag) ans.push_back('R');
//         if(movement.second == -1 && !flag) ans.push_back('L');
//         dfs(dx,dy);
//     }
//     if(flag) return true;
//     ans.pop_back();
//     return false;
// }

bool flag=false;
ll n,m,bx=0, by=0;
char g[1001][1001];
bool vis[1001][1001];
pair<int, int> parent[1001][1001];
int lvl[1001][1001];
vector<char> ans;

bool isValid(int x, int y){
    return x<n && y<m && x>=0 && y>=0;
}

void bfs(int x, int y){
    queue<pair<int,int> > q;
    q.push({x,y});
    vis[x][y] = true;
    lvl[x][y] = 0;
    parent[x][y] = {-1,-1};

    while(!q.empty()){
        auto cur = q.front();
        int cur_x = cur.first;
        int cur_y = cur.second;
        q.pop();
        for(auto movement: movements){
            int dx = cur.first + movement.first;
            int dy = cur.second + movement.second;
            if(!isValid(dx,dy)) continue;
            if(vis[bx][by]) return;
            if(vis[dx][dy]) continue;
            if(g[dx][dy]=='#') continue;

            lvl[dx][dy] = lvl[cur_x][cur_y]+1;
            parent[dx][dy] = {cur_x, cur_y};
            q.push({dx,dy});
            vis[dx][dy] = true;
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    ll ax=0, ay=0;
    For(i,n){
        For(j,m) {
            cin>>g[i][j];
            if(g[i][j]=='A'){
                ax=i;
                ay=j;
            }
            if(g[i][j]=='B'){
                bx=i;
                by=j;
            }
        }
    }
    bfs(ax,ay);
    if(vis[bx][by]){
        cout<<"YES\n";
        vector<char> ans;
        //cout<<parent[bx][by].first<<" "<<parent[bx][by].second;
        cout<<lvl[bx][by]<<nl;
        while(1){
            int x =parent[bx][by].first;
            int y = parent[bx][by].second;
            if(x==-1 && y==-1) break;
            //cout<<bx<<" "<<by<<" "<<x<<" "<<y<<nl;
            if(bx-x == 1) ans.push_back('D');
            if(bx-x == -1) ans.push_back('U');
            if(by-y == 1) ans.push_back('R');
            if(by-y == -1) ans.push_back('L');

            bx = x;
            by = y;
        }
        //For(i,ans.size()) cout<<ans[i];
        for(int i=ans.size()-1; i>=0; --i) cout<<ans[i];
        cout<<nl;
    }
    else cout<<"NO\n";

return 0;
}



