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
    int n;
    bool one=false, zero=false;
    cin>>n;
    vi a(n),b(n);

    For(i,n) {
        cin>>a[i];
        if(a[i]==1) one = true;
    }
    For(i,n) cin>>b[i];

    if(a[0]!=b[0] || a[n-1]!=b[n-1]){
        cout<<"NO\n";
        return;
    }
    for(int i=1; i<n-1;++i){
        if(a[i]==b[i]){
            if(a[i]==1)one=true;
            continue;
        }
        else if(a[i]==1 && b[i]==0) {
            cout<<"NO\n";
            return;
        }
        else if(a[i]==0 && b[i]==1){
            if(!one){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
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