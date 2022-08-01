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

    int t,n; cin>>t;
    while(t--){
        cin>>n;
        int temp = n/3;
        if(n%3==1) cout<<temp<<" "<<temp+1+(n%3)<<" "<<temp-1<<nl;
        else if(n%3==2) cout<<temp+1<<" "<<temp+(n%3)<<" "<<temp-1<<nl;
        else cout<<temp<<" "<<temp+1<<" "<<temp-1<<nl;
    }

return 0;
}