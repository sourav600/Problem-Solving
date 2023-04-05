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
const int N = 1010;
vector<int> g[N];
vector<int> par(N);

void dfs(int v, int p=-1){
    par[v] = p;
    for(auto child : g[v]){
        if(child == v) continue;
        dfs(child,v);
    }
}

vector<int> path(int v){
    vector<int> arr;
    while(v!=-1){
        arr.pb(v);
        v = par[v];
    }
    reverse(arr.begin(),arr.end());
    return arr;
}

void solve(int tc){
    int n,x,v; 
    cin>>n;
    For(i,n){
        cin>>x;
        while(x--){
            cin>>v;
            g[i+1].pb(v);
        }
    }

    dfs(1);
    int q,v1,v2; 
    cin>>q;
    vector<int> path1, path2;
    cout<<"Case "<<tc<<":\n";
    while(q--){
        cin>>v1>>v2;
        path1 = path(v1);
        path2 = path(v2);
        
        int mn_len = min(path1.size(),path2.size());
        int lca;
        For(i,mn_len){
            if(path1[i]==path2[i]) lca = path1[i];
            else break;
        }
        cout<<lca<<nl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}