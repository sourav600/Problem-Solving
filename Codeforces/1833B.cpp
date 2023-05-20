#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve(int tc){
    ll n,k,x;
    cin>>n>>k;
    vector<ll> arr(n),brr(n);
    for(int i=0; i<n;++i) cin>>arr[i];
    for(int i=0; i<n;++i) cin>>brr[i];
    unordered_map<ll, vector<ll> > um;
    for(int i=0; i<n;++i){
        um[arr[i]].push_back(i);
    }
    for(auto it : um){
        for(auto it2 : it.second) cout<<it2<<" ";
        cout<<nl;
    }
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());

    vector<ll> ans(n);
    for(int i=0; i<n; ++i){
        int pos = um[arr[i]].back();
        ans[pos] = brr[pos];
        um[arr[i]].pop_back();
    }
    // for(auto it: um){
    //     for(auto it1 : it.second){
    //         ans[it1.back()] = brr[it1.back()];
    //         it1.pop_back();
    //     }
        
    // }
    for(int i=0; i<n; ++i) cout<<ans[i]<<" ";
    cout<<nl;
    
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