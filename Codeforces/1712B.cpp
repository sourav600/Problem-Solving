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

void solve(int tc){
    int n;cin>>n;
    vi v(n);
    int even=2,odd=1;
    if(n&1){
        v[0]=odd;
        odd += 2;
        for(int i=1;i<n;i+=2){
            v[i]=odd;
            v[i+1]=even;
            odd+=2; even+=2;
        }
    }
    else{
        for(int i=0;i<n;i+=2){
            v[i]=even;
            v[i+1]=odd;
            even+=2; odd+=2;
        }
    }
    For(i,n)cout<<v[i]<<" ";
    cout<<nl;
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