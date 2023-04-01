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
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;

int dfs(int i,int j,vector<vector<int> >& vis, char par,vs &graph,int cnt){
    int n = graph.size();
    int m = graph[0].size();
    if(i<0 || j<0 || i>=n || j>=m) return 0;
    if(vis[i][j]!=0) return vis[i][j];
    if(par!='a' && graph[i][j]!=par+1) return 0;

    //vis[i][j] = max(vis[i][j],++ct);
    //cout<<graph[i][j]<<i<<j<<vis[i][j]<<nl;
    
    vis[i][j] = cnt+1;

    dfs(i,j+1,vis,graph[i][j],graph,vis[i][j]);
    dfs(i,j-1,vis,graph[i][j],graph,vis[i][j]);
    dfs(i+1,j,vis,graph[i][j],graph,vis[i][j]);
    dfs(i-1,j,vis,graph[i][j],graph,vis[i][j]);
    dfs(i+1,j+1,vis,graph[i][j],graph,vis[i][j]);
    dfs(i-1,j-1,vis,graph[i][j],graph,vis[i][j]);
    dfs(i-1,j+1,vis,graph[i][j],graph,vis[i][j]);
    dfs(i+1,j-1,vis,graph[i][j],graph,vis[i][j]);

    return vis[i][j];
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    int ct = 0;
    while(1){
        int n,m;
        cin>>n>>m;
        if(n==0 && m==0) break;
        cout<<"Case "<<++ct<<": ";
        cin.ignore();
        vs v(n);
        For(i,n) cin>>v[i];
        //cout<<'A'-1<<nl;
        int ans = 0;

        vector<vector<int> > vis(n,vector<int>(m,0));
        For(i,n){
            For(j,m){
                if(v[i][j]=='A') dfs(i,j,vis,'a',v,0);
            }
        }
        For(i,n){
            For(j,m){
                ans = max(ans,vis[i][j]);
            }
        }
        cout<<ans<<nl;
    }

return 0;
}