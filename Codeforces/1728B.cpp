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
    int n; cin>>n;
    vi v(n);
    v[n-1] = n;
    int  k;
    
    if(n%3==0){
        if(n%2==0){
            v[n-2] = n-1;
            k=n-2;
            for(int i=0; i<n-2; ++i) v[i]=k--;
        }
        else{
            k=n-3;
            v[0]=n-1;
            v[n-2] = n-2;
            for(int i=1; i<n-2;++i) v[i]=k--;
            
        }
    }
    else{
        v[n-2]=n-1;
        v[n-3] = 1;
        k = 2;
        for(int i=0; i<n-3; ++i){
            v[i] = k++;
        }
    }
    
    
    
    
    For(i,n) cout<<v[i]<<" ";
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