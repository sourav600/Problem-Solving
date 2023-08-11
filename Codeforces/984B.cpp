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
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1},{1,1},{-1,1},{-1,-1},{1,-1}};
ll mod(ll a){ return ((a%M)+M)%M;}

bool isValid(int x, int y, int n, int m){
	return x>=0 && y>=0 && x<n && y<m;
}

int val[101][101];

void SOURAV(int tc){
	int n,m;	cin>>n>>m;
	char ar[n][m];
	For(i,n){
		For(j,m){
			cin>>ar[i][j];
			if(ar[i][j]=='*'){
				for(auto movement: movements){
					int dx = i + movement.first;
					int dy = j + movement.second;
					if(isValid(dx,dy,n,m)) val[dx][dy]++;
				}
			}
		}
	}
	For(i,n){
		For(j,m){
			//cout<<ar[i][j]<<" "<<val[i][j]<<nl;
			if(ar[i][j]=='*') continue;
			if(ar[i][j]=='.') {
				if(val[i][j]!=0){
					cout<<"NO\n";
					return;
				}
			}
			else if(val[i][j] != (ar[i][j]-'0')) {
				cout<<"NO\n";
				return;
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

    int t,tc=1;;
    SOURAV(tc++);

return 0;
}



