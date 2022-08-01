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

const int N=1e6+10;
int a[N], hp[N];
int canRemove[N];
int hsh[N];

vi distinctPF(int n){
    vi v;
    while(n>1){
        int highP=hp[n];
        while(n%highP==0) n/=highP;
        v.pb(highP);
    }
    return v;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    for(int i=2; i<N; ++i){
        if(hp[i]==0){
            for(int j=i; j<N; j+=i) hp[j]=i;
        }
    }
    int n,q; cin>>n>>q;
    For(i,n){
        int x; cin>>x;
        hsh[x]=1;
    }
    for(int i=2;i<N;++i){
        if(hsh[i]){
            for(ll j=i;j<=N; j*=i) canRemove[j]=1;
        }
    }
    int x;
    while (q--)
    {
        cin>>x;
        vi pf = distinctPF(x);
        bool isPossible=false;
        for(int i=0; i<pf.size(); ++i){
            for(int j=i; j<pf.size(); ++j){
                int product=pf[i]*pf[j];
                if(i==j && (x%product!=0))continue;
                int toRemove = x/product;
                if(canRemove[toRemove]==1 || toRemove==1){
                    isPossible=true;
                    break;
                }
            }
            if(isPossible) break;
        }
        cout<<(isPossible ? "YES\n" : "NO\n");
    }
    

return 0;
}