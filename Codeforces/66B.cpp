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

ll mod(ll a){
    return ((a%M)+M)%M;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int n; cin>>n;
    vi v(n);
    For(i,n) cin>>v[i];
    int x=0,maxi=0,count=1;
    For(i,n){
        count=1;
        if(i==n-1) maxi=max(i-x+1,maxi);
        else{
            count+=i-x;
            int j=i;
            while(v[j]>=v[j+1] && j<n-1){
                ++count;
                if(v[j]>v[j+1]) x=j+1;
                ++j;
            }
            maxi = max(maxi,count);
        }
    }
    cout<<maxi<<nl;

return 0;
}