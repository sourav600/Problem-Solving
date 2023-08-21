#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
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

int n,m;
char g[51][51];
bool vis[51][51];
int level[51][51];

bool isValid(int x,int y){
	 return x>=0 && y>=0 && x<n && y<m; 
}

int bfs(int srcX, int srcY){
	queue<pair<int,int> > q;
	q.push({srcX,srcY});
	vis[srcX][srcY] = 1;

	level[srcX][srcY] = 0;
	level[n-1][m-1] = 0;

	while(!q.empty()){
		pair<int,int> cur = q.front();
		q.pop();
		int x = cur.first;
		int y = cur.second;

		for(auto movement: movements){
			int dx = x + movement.first;
			int dy = y + movement.second;

			if(!isValid(dx,dy)) continue;
			if(g[dx][dy]=='#') continue;

			if(!vis[dx][dy]){
				//cout<<dx<<" "<<dy<<nl;
				q.push({dx,dy});
				vis[dx][dy] = 1;
				level[dx][dy] = level[x][y] + 1;
			}
		}
	}
	return level[n-1][m-1];
}

void SOURAV(int tc){
	mem(g,0);
	mem(vis,0);
	mem(level,0);

	cin>>n>>m;
	For(i,n){
		For(j,m) cin>>g[i][j];
	}

	For(i,n){
		For(j,m){
			if(g[i][j]=='B'){
				for(auto movement: movements){
					int dx = i+movement.first;
					int dy = j+movement.second; 
					if(g[dx][dy]=='B') continue;
					if(isValid(dx,dy)){
						if(g[dx][dy]=='G'){
							cout<<"NO\n";
							return;
						}
						g[dx][dy] = '#';
					}
				}
			}
		}
	}

	For(i,n){
		For(j,m){
			if(g[i][j] =='G'){
				if(vis[i][j]) continue;
				//cout<<i<<" "<<j<<nl;
				if(bfs(i,j) == 0 ){
					cout<<"NO\n";
					return;
				}
			}
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



