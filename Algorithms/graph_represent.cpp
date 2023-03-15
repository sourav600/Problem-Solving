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
int graph[100][100];

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int v,e; cin>>v>>e;
    vector<int > list[v+1];
    For(i,e){
        int v1,v2,w;
        cin>>v1>>v2;
        graph[v1-1][v2-1]=1;
        graph[v2-1][v1-1]=1;

        list[v1].push_back(v2);
        list[v2].push_back(v1);
    }
    cout<<"Matrix\n";
    For(i,v){
        For(j,v) cout<<graph[i][j]<<" ";
        cout<<nl;
    }
    cout<<nl<<"Adjacency List\n";
    for(int i=1;i<=v;++i){
        cout<<i<<": ";
        for(auto it : list[i]) cout<<it<<" ";
        cout<<nl;
    }

    
return 0;
}