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
vector<int> graph[N];
bool visited[N];

void dfs(int vertex){
    visited[vertex] = true;
    for(int child : graph[vertex]){
        if(visited[child]) continue;
        dfs(child);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int v,e;
    cin>>v>>e;
    int u1,u2;
    For(i,e){
        cin>>u1>>u2;
        graph[u1].pb(u2);
        graph[u2].pb(u1);
    }

    int ct=0;
    for(int i=1; i<=v;++i){
        if(visited[i]) continue;
        dfs(i);
        ++ct;
    }
    cout<<ct<<nl;

return 0;
}