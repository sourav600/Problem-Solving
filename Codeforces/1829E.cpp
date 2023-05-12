// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef unsigned long ulong;
// #define nl '\n'
// #define For(i,n) for(int i=0; i<n; i++)
// #define vi vector<int>
// #define vs vector<string>
// #define vl vector<ll>
// #define mi map<int,int>
// #define umi unordered_map<int,int>
// #define vpp vector<pair<int,int> >
// #define pb(x) push_back(x)
// #define pi acos(-1)
// const ll INF = 1e9 + 7;
// const ll N = 1e3 + 10;

// int graph[N][N];
// int vis[N][N];
//     int n,m;

// vector<pair<int, int> > movements ={
//   {1,0},{-1,0},{0,1},{0,-1}  
// };
// bool isValid(int x,int y){
//     return x>=0 && y>=0 && x<n && y<m && graph[i][j]!=0;
// }
// int dfs(int i,int j){
//     vis[i][j] = true;
//     int ct = graph[i][j];
//     for(auto movement : movements){
//         int x = movement.first + i;
//         int y = movement.second + j;
//         if(isValid(x,y)) ct+= dfs(x,y);
//     }    
//     return ct; 
// }

// int main(){
//     #ifndef ONLINE_JUDGE
//     freopen("../Input.txt", "r", stdin);
//     freopen("../Output.txt", "w", stdout);
//     #endif

//     int t,tc=1; cin>>t;

//     while(t--){

//         cin>>n>>m;
        
//         For(i,n){
//             For(j,m){
//                 cin>>graph[i][j];
//             }
//         }

//         int ans=0;
//         for(int i=0; i<n;++i){
//             for(int j=0; j<m; ++j){
//                 if(vis[i][j] || graph[i][j]==0) continue;
//                 ans = max(ans,dfs(i,j));
//             }
//         }
//     cout<<ans<<nl;
//     }
    
    

// return 0;
// }

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
const ll N = 1e3 + 10;

int graph[N][N];
int vis[N][N];
int n,m;


int dfs(int i,int j){
    if(vis[i][j] || graph[i][j]==0) return 0;
    if(i<0 || j<0) return 0;
    if(i>=n || j>=m) return 0;
    vis[i][j] = true;
    
    int ct = graph[i][j];
    ct+=dfs(i,j+1);
    ct+=dfs(i,j-1);
    ct+=dfs(i+1,j);
    ct+=dfs(i-1,j);
    return ct;
}

void reset(){
    For(i,N){
        For(j,N){
            vis[i][j]=0;
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;

    while(t--){
        reset();
        cin>>n>>m;
        For(i,n){
            For(j,m){
                cin>>graph[i][j];
            }
        }

        int ans=0;
        for(int i=0; i<n;++i){
            for(int j=0; j<m; ++j){
                if(!vis[i][j] && graph[i][j]>0) ans = max(ans,dfs(i,j));
            }
        }
    cout<<ans<<nl;
    }
    
    

return 0;
}