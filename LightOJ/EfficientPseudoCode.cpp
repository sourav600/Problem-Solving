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

ll power(int n, int m){ 
    if(m==0) return 1; //base condition
     
    ll temp = power(n,m/2);
    if(m&1) return n * temp * temp;
    else return temp*temp;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cout<<pow(2,30)<<nl;
    int t,n,m; cin>>t;
    For(i,t){
        cin>>n>>m;
        ll p = power(n,m);
        //cout<<p<<nl;
        int sum=0;
        for(int j=1; j*j<=p; j++ ){
            if(p%j==0) {
                if(j*j == p) sum+=j;
                else sum+= j+(p/j);
            }
        }
        cout<<"Case "<<i+1<<": "<<sum<<nl;
    }
return 0;
}