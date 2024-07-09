#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>

typedef unsigned long long  ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const ll M = 1e9 + 7;
const ll N = 2e5 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1};int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction
ll mod(ll a){ return ((a%M)+M)%M;}

int parent[N];
int sz[N];
int experience[N], pending[N];
vi v[N];

void make(int a){
    parent[a] = a;
    sz[a]=1;
    v[a].push_back(a);
    experience[a] = pending[a] = 0;
}
int find(int a){
    if(a==parent[a]) return a;
    return parent[a] = find(parent[a]);
}
void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        if(sz[a]<sz[b])
            swap(a,b);

        parent[b]=a;
        sz[a]+=sz[b];

        for(auto it: v[b]){
            experience[it] = (experience[it]+pending[b])-pending[a];
            v[a].push_back(it);
        }
        v[b] = {b};
        pending[b] = 0;
    }
}
int get(int a){
    int p = find(a);
    return experience[a] + pending[p];
}

void SOURAV(int tc){
    int n,m; cin>>n>>m;
    cin.ignore();
    For(i,n) make(i+1);

    while(m--){
        string s;
        int a,b;
        cin>>s;
        if(s=="add"){
            cin>>a>>b;
            a = find(a);
            pending[a] += b;
        }
        else if(s=="join"){
            cin>>a>>b;
            Union(a,b);
        }
        else{
            cin>>a;
            cout<<get(a)<<nl;
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    SOURAV(1);

return 0;
}



