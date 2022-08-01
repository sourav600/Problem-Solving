#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define vc vector<char>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t,n=8;
    char ch;
    cin>>t;
    cin.ignore();
    char c[n][n];
    while(t--){
        int check=0;
        For(i,8){
            For(j,8){
                cin>>c[i][j];
            }
        }

        for(int i=0;i<8 && check==0; i++){
            for(int j=0;j<8 && check==0; j++){
                if(c[i][j]=='#' && c[i][j+2]=='#') {cout<<i+2<<" "<<j+2<<nl;check=1;break;}
            }
        }
        
    }
    return 0;
}


