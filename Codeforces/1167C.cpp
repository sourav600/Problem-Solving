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
const int N = 5e5+10;

vector<int> g[N];
bool vis[N];

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int n,m,k;
    cin>>n>>m;
    vi ans(n+1);
    For(i,m){
        cin>>k;
        vi v(k);
        For(j,k){
            cin>>v[j];
        }
        for(int j=0 ;j<k-1;++j){
            g[v[j]].pb(v[j+1]);
            g[v[j+1]].pb(v[j]);
        }
    }
    for(int i=1; i<=n;++i){
        if(vis[i]) continue;

        vector<int> component;
        queue<int> q;
        q.push(i);

        while(!q.empty()){
            int x = q.front();
            q.pop();
            if(vis[x]) continue;
            vis[x]=true;
            component.pb(x);

            for(auto child: g[x]){
                if(!vis[child]) q.push(child);
            }
        }
        for(auto it: component){
            ans[it] = component.size();
        }
    }
    for(int i=1; i<=n;++i) cout<<ans[i]<<" ";
    // for(int i=1; i<=n;++i){
    //     cout<<i<<": ";
    //     for(auto child:g[i]) cout<<child<<" ";
    //     cout<<nl;
    // }
    

return 0;
}