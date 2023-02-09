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
    vl v(n);
    int count = 0;
    For(i,n) {
        cin>>v[i];
        if(v[i]<0){
            ++count;
            v[i] = -1*v[i];
        }
    }
    ll sum=0;
    if(count%2==0) {
        For(i,n) sum+=v[i];
    }
    else{
        sort(v.begin(), v.end());
        sum -= v[0];
        for(int i=1; i<n; ++i) sum+=v[i];
    }
    cout<<sum<<nl;
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