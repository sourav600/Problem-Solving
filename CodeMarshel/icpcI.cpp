#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;
const ll M = 1000000007;



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    double l,w;
    while(cin>>l>>w && l!=0 && w!=0){
        double i = l/(sqrt(2.0)+1.0);
        double d = sqrt(2.0)*i;
        double ans=l+w-(2*i)+d;
        cout<<ans<<nl;
    }

return 0;
}