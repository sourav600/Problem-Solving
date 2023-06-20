#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,n) for(int i=0; i<n; i++)
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
const ll N = 2e5 + 10;



char mat[21][21];
bool vis[21][21];
int n,m;

vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
bool isValid(int x,int y){
	return x>=0 && y>=0 && x<m && y<n;
}
int ct = 0;
void dfs(int x, int y){
	++ct;
	vis[x][y] = true;

	for(auto movement : movements){
		int cx = x + movement.first;
		int cy = y + movement.second;

		if(!isValid(cx,cy)) continue;
		if(vis[cx][cy]) continue;
		if(mat[cx][cy]=='#') continue;
		dfs(cx,cy); 
		
	}

}

void solve(int tc){
	cout<<"Case "<<tc<<": ";
	mem(vis,false);
	ct=0;
	
	cin>>n>>m;
	int x,y;
	For(i,m){
		For(j,n) {
			cin>>mat[i][j];
			if(mat[i][j]=='@'){
				x = i;
				y = j;
			}
		}
	}
	// For(i,m){
	// 	For(j,n) cout<<mat[i][j];
	// 	cout<<nl;
	// }
	//cout<<x<<" "<<y<<nl;
	dfs(x,y);
	cout<<ct<<nl;


}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}



