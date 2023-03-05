#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;

void solve(int tc){
    int n; cin>>n;
    vi v(n);
    For(i,n) cin>>v[i];
    cout<<1<<" ";
    for(int i=1;i<n;++i){
        int l=0, r=i,x=1;
        while(r-l>0){
            int mid = l+(r-l)/2, k=i-mid+1;
            if(v[mid]>=k){
                r=mid;
                x=k;
            }
            else l=mid+1;
        }
        cout<<x<<" ";
    }
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