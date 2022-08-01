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

    int t, a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int n = b;
        ll sum = (n*(n-1))/2;
        ll temp = (a*(a+1))/2;
        temp *= b;
        cout<<sum+temp<<nl; 
    }
return 0;
}