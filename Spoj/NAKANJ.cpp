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
const int INF = 1e9+10;

bool vis[8][8];
int level[8][8];


int getX(string s){
    return s[0]-'a';
}

int getY(string s){
    return s[1]-'1';
}

bool isValid(int x,int y){
    return x>=0 && x<8 && y>=0 && y<8; 
}

vector<pair<int,int> > movements={
    {2,1},{2,-1},
    {1,2},{-1,2},
    {-2,1},{-2,-1},
    {1,-2},{-1,-2}
};

int bfs(string s1,string s2){
    int srcX = getX(s1);
    int srcY = getY(s1);
    int destX = getX(s2);
    int destY = getY(s2);

    queue<pair<int,int> > q;
    q.push( {srcX,srcY} );
    vis[srcX][srcY] = true;
    level[srcX][srcY] = 0;

    while(!q.empty()){
        pair<int,int> cur = q.front();
        int x = cur.first;
        int y = cur.second;
        q.pop();

        for(auto movement : movements){
            int childX = x + movement.first;
            int childY = y + movement.second;
            
            if(!isValid(childX,childY)) continue;
            if(!vis[childX][childY]){
                q.push({childX,childY});
                vis[childX][childY] = true;
                level[childX][childY] = level[x][y] + 1;
            }
        }
        if(level[destX][destY]!=INF) break;

    }
    return level[destX][destY];
}

void reset(){
    for(int i=0; i<8;++i){
        for(int j=0; j<8; ++j){
            level[i][j] = INF;
            vis[i][j] = false;
        }
    }
}

int main(){
    

    int t,tc=1; cin>>t;
    cin.ignore();
    string s1,s2;
    while(t--){
        reset();
        cin>>s1>>s2;
        cout<<bfs(s1,s2)<<nl;
    }

return 0;
}