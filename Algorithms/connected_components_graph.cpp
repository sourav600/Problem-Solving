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

const int N = 1e5+10;
int graph[1000][1000];

void dfs(int i,int j,int n,int m, vector< vector<bool> > &visited){
    if(visited[i][j] || graph[i][j]==0) return;
    if(i<0 || j<0) return;
    if(i>=n || j>=m) return;

    visited[i][j] = true;
    dfs(i,j+1,n,m,visited);
    dfs(i,j-1,n,m,visited);
    dfs(i+1,j,n,m,visited);
    dfs(i-1,j,n,m,visited);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int m,n;
    cin>>n>>m;
    vector< vector<bool> >  vis(n , vector<bool>(m, 0));

    For(i,n){
        For(j,m){
            cin>>graph[i][j];
        }
    }


    int ct=0;
    for(int i=0; i<n;++i){
        for(int j=0; j<m; ++j){
            if(vis[i][j] || graph[i][j]==0) continue;
            dfs(i,j,n,m,vis);
            ++ct;
        }
    }
    cout<<ct<<nl;

return 0;
}