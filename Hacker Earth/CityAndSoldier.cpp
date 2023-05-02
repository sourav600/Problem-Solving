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
void make(int v){
    parent[v] = v;
}
int find(int v){
    if(parent[v]==v) return v;
    return parent[v] = find(parent[v]);
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        parent[a] = b;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    int n,q;    
    cin>>n>>q;
    for(int i=1; i<=n; ++i) make(i);
    while(q--){
        int serial,a,b;
        cin>>serial;
        if(serial==1){
            cin>>a>>b;
            Union(a,b);
        }
        else if(serial==2){
            cin>>a;
            int p = find(a);
            parent[p]=a;
            parent[a] = a;
        }
        else if(serial==3){
            cin>>a;
            cout<<find(a)<<nl;
        }
    }
    

return 0;
}