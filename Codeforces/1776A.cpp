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
    int ct=0;
    int last = 1440-v[n-1];
    if(last>=240) {
        cout<<"YES\n";
        return;
    }
    else if(v[0]-0 >= 240){
        cout<<"YES\n";
        return;
    }
    For(i,n-1){
        if(abs(v[i]-v[i+1]) >=240){
            cout<<"YES\n";
            return;
        }
        else if(abs(v[i]-v[i+1]) >=120) ct++;

        if(ct==2) {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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