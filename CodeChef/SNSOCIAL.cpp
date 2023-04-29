#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define vpp vector<pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
const ll INF = 1e9 + 7;
const ll N = 1e3 + 10;

int g[N][N];
bool vis[N][N];
int lev[N][N];
int n,m;
vector<pair<int,int> > movements = {
  {0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}  
};

bool isValid(int x, int y){
    return x>=0 && y>=0 && x<n && y<m;
}

void reset(){
    For(i,N){
        For(j,N){
            vis[i][j]=false;
            lev[i][j]=INF;
        }
    }
}

int bfs(){
    int ans = 0;
    int mx=0;
    For(i,n){
        For(j,m) {
            mx= max(mx,g[i][j]);
        }
    }
    
    queue<pair<int,int> > q;
    For(i,n){
        For(j,m) {
            if(g[i][j]==mx){
                q.push({i,j});
                vis[i][j]=true;
                lev[i][j]=0;
            }
        }
    }
    while(!q.empty()){
        auto it = q.front();
        int x = it.first;
        int y = it.second;
        q.pop();
        for(auto movement : movements){
            int child_x = movement.first + x;
            int child_y = movement.second + y;
            if(!isValid(child_x,child_y)) continue;
            if(vis[child_x][child_y]) continue;
            vis[child_x][child_y] = true;
            q.push({child_x,child_y});
            lev[child_x][child_y] = lev[x][y] +1;
            ans = max(ans,lev[child_x][child_y]);
        }
    }
    return ans;
}

int main() {
	// your code goes here
	int t; cin>>t;
    while(t--){
        reset();
        cin>>n>>m;
        For(i,n){
            For(j,m) {
                cin>>g[i][j];
            }
        }
        cout<<bfs()<<nl;
    }

	return 0;
}
