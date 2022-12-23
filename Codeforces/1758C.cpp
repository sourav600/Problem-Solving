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
    int n,x;
    cin>>n>>x;

    if(n%x)cout<<-1<<nl;
    else{
        vi v(n+1);
        v[1]=x;
        v[n]=1;
        for(int i=2;i<n;++i) v[i]=i;
        if(n==x) for(int i=1;i<=n;++i) cout<<v[i]<<" ";
        else{
            v[x]=n;
            for(int i=2;i<n;++i){
                if(i%x==0 && n%i==0){
                    swap(v[i],v[x]);
                    x=i;
                }
            }
            for(int i=1;i<=n;++i) cout<<v[i]<<" ";
        }
    cout<<nl;
    }
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