#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5+10;
const int INF = 1e9+10;

vector<pair<ll, ll> > g[N];
  ll v,e;

void dijkstra(ll src){
    vector<ll> dist(N, INF);
    vector<bool> vis(N,false);
    set<pair<ll, ll> > st; // weight node

    st.insert({0, src});
    dist[src] = 0;

    while(st.size() > 0){
        auto cur = *st.begin();
        ll cur_v = cur.second;
        ll cur_dis = cur.first;
        st.erase(st.begin());

        if(vis[cur_v]) continue;
        vis[cur_v] = true;
        for(auto child : g[cur_v]){
            ll child_v = child.first;
            ll child_wt = child.second;
            if(child_wt + dist[cur_v] < dist[child_v]){
                dist[child_v] = dist[cur_v] + child_wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
    for(int i=1;i<=v;++i) cout<<dist[i]<<" ";
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);


    cin>>v>>e;
    for(ll i=0; i<e; ++i){
        ll x, y, wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt});
    }
    dijkstra(1);

    return 0;
}
