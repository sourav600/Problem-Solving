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


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    int a=0,b=0,c=0,d=0,check=0;
    char x;
    For(i,10){
        For(j,10){
            cin>>x; 
            if(x=='#' && check==0){
                check=1;
                a=i+1; c=j+1;
            }
            if(x=='#'){
                b=i+1;
                d=j+1;
            }
        }
    }
    cout<<a<<" "<<b<<nl;
    cout<<c<<" "<<d<<nl;

return 0;
}