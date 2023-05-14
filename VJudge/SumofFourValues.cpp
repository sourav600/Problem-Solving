#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=1; i<=n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define vpp vector<pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
const ll INF = 1e9 + 7;
const ll N = 1e5 + 10;

void solve(){
    ll n,m;
    cin>>n>>m;
    vl v(n+1);
    unordered_map<int,vi> um;
    For(i,n) {
        cin>>v[i];
        um[v[i]].pb(i);
    }

    sort(v.begin(),v.end());
    for(int i=1; i<=n; ++i){
        for(int j=i+1; j<=n;++j){
            int l=j+1, r=n;
            while(l<r){
                ll sum = v[i]+v[j]+v[l]+v[r];
                if(m==sum){

                    //cout<<v[i]<<" "<<v[j]<<" "<<v[l]<<" "<<v[r]<<nl;
                    cout<<um[v[i]].back()<<" ";
                    um[v[i]].pop_back();
                    cout<<um[v[j]].back()<<" ";
                    um[v[j]].pop_back();
                    cout<<um[v[l]].back()<<" ";
                    um[v[l]].pop_back();
                    cout<<um[v[r]].back()<<nl;
                    um[v[r]].pop_back();
                    return;
                }
                else if(m>sum) ++l;
                else --r;
            }
        }
    }
    cout<<"IMPOSSIBLE\n";
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    
    solve();
return 0;
}