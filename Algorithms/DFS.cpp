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

vector<int> lst[1000];
int graph[100][100];
bool visited[1000];

void dfs_list(int vertex){
    visited[vertex]=true;
    cout<<vertex<<" ";
    for(int child : lst[vertex]){
        if(visited[child]) continue;
        dfs_list(child);
    }
}
void dfs_matrix(int child, int ver){
    visited[child]=true;
    cout<<child+1<<" ";
    for(int i=0; i<ver;++i){
        if(graph[child][i]==1 && (!visited[i]))
            dfs_matrix(i,ver);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int v,e; cin>>v>>e;
    For(i,e){
        int v1,v2,w;
        cin>>v1>>v2;
        graph[v1-1][v2-1]=1;
        graph[v2-1][v1-1]=1;

        lst[v1].push_back(v2);
        lst[v2].push_back(v1);
    }
    cout<<"Matrix\n";
    For(i,v){
        For(j,v) cout<<graph[i][j]<<" ";
        cout<<nl;
    }
    cout<<nl<<"Adjacency List\n";
    for(int i=1;i<=v;++i){
        cout<<i<<": ";
        for(auto it : lst[i]) cout<<it<<" ";
        cout<<nl;
    }
    cout<<"DFS List: ";
    dfs_list(1);
    For(i,1000) visited[i]=false;
    cout<<"\nDFS Matrix: ";
    dfs_matrix(0,v);
    
return 0;
}