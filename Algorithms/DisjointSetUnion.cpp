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
int size[N];
void make(int a){
    parent[a] = a;
    size[a]=1;
}
int find(int a){
    if(a==parent[a]) return a;
    return parent[a] = find(parent[a]);
}
void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        if(size[a]<size[b])
            swap(a,b);

        parent[b]=a;
        size[a]+=size[b];

    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

return 0;
}
