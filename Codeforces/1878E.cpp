#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
typedef vector<ll> vl;

ll prefix_count[32][200001];

void findPrefixCount(vl arr, ll n)
{
    for (ll i = 0; i < 32; i++) {
        prefix_count[i][0] = ((arr[0] >> i) & 1);
        for (ll j = 1; j < n; j++) {
            prefix_count[i][j] = ((arr[j] >> i) & 1);
            prefix_count[i][j] += prefix_count[i][j - 1];
        }
    }
}

ll rangeAnd(int l, int r)
{

    ll ans = 0;

    for (int i = 0; i < 32; i++) {
        ll x;
        if (l == 0)
            x = prefix_count[i][r];
        else
            x = prefix_count[i][r]
                - prefix_count[i][l - 1];
        if (x == r - l + 1)
            ans = (ans | (1 << i));
    }

    return ans;
}


void SOURAV(int tc){
    ll n; cin>>n;
    vl v(n+1);
    For(i,n) cin>>v[i];




    findPrefixCount(v,n);
    ll q; cin>>q;
    ll l,k;
    For(i,q){
        cin>>l>>k;
            ll pos = -1;
            ll lo = l-1, hi = n-1;
            while(lo<=hi){
                ll mid = (lo+hi)/2;
                ll temp = rangeAnd(l-1,mid);


                if(temp >= k){
                    pos = mid;
                    lo = mid+1;
                }
                else hi = mid-1;
            }
            cout<<(pos<0?pos:pos+1)<<" ";
    }cout<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    SOURAV(tc++);

return 0;
}





