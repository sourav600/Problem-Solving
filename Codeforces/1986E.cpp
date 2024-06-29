#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()
typedef vector<int> vi;

int findMaxDiff(vector<int> &v, int k){
    if(v.size()==1) return 0;

    vector<int> pre(v.size(),0);
    vector<int> suff(v.size(),0);

    for(int j=1; j<v.size()-1; j+=2){
        if(j==1) pre[j] = (v[j] - v[j-1]) / k;
        else pre[j] += pre[j-2] + ((v[j] - v[j-1]) / k);
    }
    for(int j=v.size()-2; j>=1; j-=2){
        if(j==v.size()-2) suff[j] = (v[j+1] - v[j]) / k;
        else suff[j] += suff[j+2] + ((v[j+1] - v[j]) / k);
    }
    int mn = INT_MAX;
    for(ll j=0; j<v.size(); j+=2){
        if(j==0) mn = min(mn, suff[j+1]);
        else if(j==v.size()-1) mn = min(mn, pre[j-1]);
        else mn = min(mn, pre[j-1]+suff[j+1]);
    }
    //cout<<mn<<nl;
    return mn;

}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vi v(n);
        For(i,n) cin>>v[i];

        map<int, vi> um;
        int pos=0;
        For(i,n) {
            int r = (v[i]%k);
            um[r].push_back(v[i]);
        }

        // For(i,pos){
        //     For(j,v2[i].size()) cout<<v2[i][j]<<" ";
        //     cout<<nl;
        // }

        int ans=0, ct=0;
        for(auto it : um){
            vi v2 = it.second;
            sort(all(v2));
            int sum=0;
            if(v2.size()&1) {
                ++ct;
                if(ct>1){
                    break;
                }
                ans += findMaxDiff(v2,k);
            }
            else{

                for(int j=0; j<v2.size(); j+=2){
                sum += (v2[j+1] - v2[j]);
                }
                //cout<<sum<<nl;
                ans += (sum/k);
            }
        }
        if(ct>1) cout<<-1<<nl;
        else cout<<ans<<nl;
    }

return 0;
}



