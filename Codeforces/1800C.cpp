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
    ll n; cin>>n;
    vl v(n);
    priority_queue<ll> pq;
    For(i,n) cin>>v[i];
    ll ct = 0,ans=0;
    ll x=0;
    For(i,n){
        if(v[i]!=0) {
            ++ct;
            pq.push(v[i]);
        }
        else{
            if(ct>0){
                ans += pq.top();
                ++x;
                --ct;
                pq.pop();
            }
        }
    }
    cout<<ans<<nl;
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