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
    int n; cin>>n;
    if(n==3) cout<<"NO\n";
    else {
        cout<<"YES\n";
        if(n%2){
            int temp=n/2;
            For(i,n){
                if(i&1) cout<<"-"<<temp<<" ";
                else cout<<temp-1<<" ";
            }  
        }
        else{
            For(i,n){
                if(i&1) cout<<"-";
                cout<<"1 ";
            }    
        }
        cout<<nl;
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