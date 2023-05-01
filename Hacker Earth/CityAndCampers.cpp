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
int Size[N];
multiset<int> ms;

void make(int v){
    parent[v] = v;
    Size[v]=1;
    ms.insert(1);
}
int find(int v){
    if(parent[v]==v) return v;
    return parent[v] = find(parent[v]);
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        if(Size[a]<Size[b]){
            parent[a] = b;
            ms.erase(ms.find(Size[a]));
            ms.erase(ms.find(Size[b]));
            Size[b] += Size[a];
            ms.insert(Size[b]);
        }
        else{
            parent[b] = a;
            ms.erase(ms.find(Size[a]));
            ms.erase(ms.find(Size[b]));
            Size[a] += Size[b];
            ms.insert(Size[a]);
        }
    }
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int n,q,ans=0; cin>>n>>q;
    for(int i=1; i<=n;++i) make(i);

    int a,b;
    while(q--){
        cin>>a>>b;
        Union(a,b);
        cout<<*(--ms.end()) - (*(ms.begin())) <<nl;
    }


return 0;
}