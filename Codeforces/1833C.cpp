#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve(int tc){
    int n; cin>>n;
    vector<int> v(n);
    bool allEven = true, allOdd=true;
    int mnEven=INT_MAX, mnOdd=INT_MAX;
    for(int i=0; i<n;++i){
        cin>>v[i];
        if(v[i] & 1){
            allEven = false;
            mnOdd = min(mnOdd, v[i]);
        }else{
            allOdd = false;
            mnEven = min(mnEven, v[i]);
        }
    }
    if(allEven || allOdd) cout<<"YES\n";
    else if(mnEven > mnOdd) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}