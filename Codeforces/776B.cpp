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
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    vector<bool> v(n+2,true);
    for(int i=2;i*i<=n+1;++i){
        if(v[i]){
            for(int j=i*i; j<=n+1;j+=i) v[j]=false;
        }
    }
    (n>2)?cout<<"2\n":cout<<"1\n";
    for(int i=2; i<=n+1;++i) (v[i]==true)?cout<<"1 ": cout<<"2 ";
    cout<<nl;
return 0;
}