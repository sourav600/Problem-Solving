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

void solve(int tc){
    char v[8][8];
    For(i,8){
        For(j,8){
            cin>>v[i][j];
        }
    }
    
    For(i,8){
        int countR = 0;
        For(j,8){
            if(v[i][j]=='R' ) countR++; 
        }
        if(countR==8){
            cout<<"R\n";
            return;
        }
    }
    For(i,8){
        int countB = 0;
        for(int j=0;j<8;++j){
            if(v[j][i]=='B') countB++;
        }
        if(countB==8) {
            cout<<"B\n";
            return;
        }
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