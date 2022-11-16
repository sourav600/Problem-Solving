#include<bits/stdc++.h>
#include<set>
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

void solve(){
    ll n,d,x; cin>>n>>d;
    vl v(n);
    For(i,n)cin>>v[i];
    sort(v.rbegin(),v.rend());

    int ans=0,l=0,r=n;
    while(l<r){
        if(v[l] > d) {
            ++ans;
            ++l;
        }
        else{
            int temp = ceil(d / v[l]);
            cout<<temp<<" "<<l<<" "<<r<<nl;
            if(r-l < temp) {cout<<ans<<nl; return;}
            else{
                ans++;
                l++;
                r -= temp-1;
                //cout<<"HHHH\n";
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
    solve();

return 0;
}