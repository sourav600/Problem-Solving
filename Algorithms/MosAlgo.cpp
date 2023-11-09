#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
const int N = 2e5+10;

ll rootN;

struct Q{
    int idx, l, r;
};
Q q[N];

bool compare(Q q1, Q q2){
    if(q1.l / rootN == q2.l/rootN){
        return q1.r > q2.r;
    }
    else{
        return q1.l/rootN < q2.l/rootN;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);


    ll n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin>>v[i];

    rootN = sqrtl(n);
    ll queries; cin>>queries;
    for(int i=0; i<queries; ++i){
        ll l,r;cin>>l>>r;
        q[i].l = l;
        q[i].r = r;
        q[i].idx = i;
    }

    sort(q, q+queries, compare);
    vector<ll> ans(queries);
    ll cur_l=0, cur_r=-1, l, r;
    ll cur_ans = 0;

    for(int i=0; i<queries; ++i){
        l = q[i].l;
        r = q[i].r;

        --l; --r;
        while(cur_r < r){
            cur_r++;
            cur_ans += v[cur_r];
        }
        while(cur_l > l){
            --cur_l;
            cur_ans += v[cur_l];
        }
        while(cur_l < l){
            cur_ans -= v[cur_l];
            ++cur_l;
        }
        while(cur_r > r){
            cur_ans -= v[cur_r];
            --cur_r;
        }
        ans[q[i].idx] = cur_ans;
    }

    for(int i=0; i<queries; ++i){
        cout<<ans[i]<<nl;
    }

    return 0;
}
