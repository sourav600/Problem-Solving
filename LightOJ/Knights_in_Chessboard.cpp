#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t,n,m; cin>>t;
    For(i,t){
        cin>>n>>m;
        cout<<"Case "<<i+1<<": ";
        if(n==1 || m==1)cout<<max(n,m)<<nl;
        else if(n==2 || m==2){cout<<(((n*m)/8)*4) + (((m*n)%8)>=4? 4 : (m*n)%8)<<nl;}
        else cout<< ceil(n*m*0.5)<<nl;
    }
return 0;
}