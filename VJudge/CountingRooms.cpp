#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,n) for(int i=1; i<=n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define all(x) x.begin(), x.end()
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>


typedef long long ll;
typedef unsigned long long  ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const ll M = 1e9 + 7;
const ll N = 1e3 + 10;

char mat[N][N];
bool vis[N][N];
int n,m;

vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
bool isValid(int x,int y){
	return x>=1 && y>=1 && x<=n && y<=m;
}

void dfs(int x, int y){
	vis[x][y] = true;
	for(auto movement : movements){
		int cx = x + movement.first;
		int cy = y + movement.second;

		if(mat[cx][cy]=='#') continue;
		if(vis[cx][cy]) continue;
		
		if(isValid(cx,cy)) dfs(cx,cy);
		
	}
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    cin>>n>>m;
    For(i,n){
    	For(j,m) cin>>mat[i][j];
    }

    int cc=0;
    For(i,n){
    	For(j,m){
    		if(mat[i][j]=='#') continue;
    		if(vis[i][j]) continue;
    		//cout<<i<<" "<<j<<nl;
    		dfs(i,j);
    		++cc;
    	}
    }cout<<cc<<nl;


return 0;
}



