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
#define vpp vector< pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
const ll INF = 1e9 + 7;
const ll N = 1e5 + 10;


vi dis(N,INF);
vpp g[N];

void dijkstra(int source){
    
    vector<bool> vis(N,false);

    set<pair<int,int> > st;
    dis[source] = 0;
    st.insert({0,source});
    
    while(st.size() > 0){
        auto it = st.begin();
        int v = it->second;
        int wt = it->first;
        st.erase(st.begin());
        if(vis[v]) continue;
        vis[v] = true;

        for(auto child : g[v]){
            int child_v = child.first;
            int child_wt = child.second;
            if(dis[v] + child_wt < dis[child_v]){
                dis[child_v] = dis[v]+child_wt;
                st.insert({dis[child_v] , child_v});
            }
        }
    }
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif


    int v,e; cin>>v>>e;
    int v1,v2,w;
    For(i,e){
        cin>>v1>>v2>>w;
        g[v1].push_back({v2,w} ); //weighted graph
    }
    dijkstra(1);
    for(int i=1; i<=v;++i) cout<<dis[i]<<" ";

return 0;
}