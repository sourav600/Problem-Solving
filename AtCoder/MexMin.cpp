#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define ll long long
typedef vector<int> vi;
const ll N = 1500002;

int ct[N];

int current_Mex(){
    int mex = 0;
    while( ct[mex] ) ++ mex;
    return mex;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,m; cin>>n>>m;
    vi v(n);
    For(i,n) cin>>v[i];

    For(i,m) ct[v[i]]++;

    int ans = current_Mex();

    For(i,n-m){
        ct[v[i]]--;
        ct[v[i+m]]++;
        ans = min(ans, current_Mex());
    }
    cout<<ans<<nl;


return 0;
}



