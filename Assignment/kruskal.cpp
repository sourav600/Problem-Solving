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
const ll N = 1e5 + 10;

int parent[N];
int sz[N];
void make(int v){
    parent[v]=v;
    sz[v]=1;
}
int find(int v){
    if(parent[v]==v) return v;
    else return parent[v] = find(parent[v]);
}
void Union(int a,int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        if(sz[b] > sz[a]) swap(a,b);
        parent[b] = a;
        sz[a]+=sz[b];
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int t; cin>>t;
        while(t--){
        int v,e,mn_cost=0;
        cin>>v>>e;
        vector<pair<int, pair<int,int> > > edges;
        int v1,v2,wt;
        For(i,e){
            cin>>v1>>v2>>wt;
            edges.push_back({wt,{v1,v2}});
        }
        sort(edges.begin(), edges.end());
        for(int i=1; i<=v;++i) make(i);

        for(auto &edge : edges){
            int dis = edge.first;
            int u = edge.second.first;
            int v = edge.second.second;
            if(find(u)==find(v)) continue;
            Union(u,v);
            //cout<<u<<" "<<v<<nl;
            mn_cost+=dis;
        }
        cout<<mn_cost<<nl;
    }


return 0;
}
