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
        int sum1=0,sum2=0;
        cin>>n;
        For(i,3){
            sum2 += n%10;
            n/=10;
        }
        For(i,3){
            sum1 += n%10;
            n/=10;
        }
        sum1==sum2? cout<<"YES\n": cout<<"NO\n";
    }

return 0;
}