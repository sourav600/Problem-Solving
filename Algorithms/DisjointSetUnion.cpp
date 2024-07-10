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
void make(int a){
    parent[a] = a;
    sz[a]=1;
}
int find(int a){
    if(a==parent[a]) return a;
    return find(parent[a]);
}
void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        if(sz[a]<sz[b])
            swap(a,b);

        parent[b]=a;
        sz[a]+=sz[b];

    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    for(int i=1; i<=10; ++i) make(i);
    Union(1,4);
    Union(2,7);
    Union(7,10);
    Union(4,6);
    Union(10,9);
    Union(4,7);
    parent[1]=1;
    for(int i=1; i<=10; ++i) cout<<parent[i]<<nl;
        cout<<find(4);
return 0;
}
