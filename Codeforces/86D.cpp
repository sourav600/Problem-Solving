#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
const int N = 2e5+10;

ll rootN;
vector<int> um(1000001);
ll cur_ans = 0;
vector<int> v(N);

struct Q{
    int idx, l, r;
};
Q q[N];

bool compare(Q q1, Q q2){
    if(q1.l/rootN == q2.l/rootN){
        return q1.r < q2.r;
    }
    else{
        return q1.l/rootN < q2.l/rootN;
    }
}
void add(int pos){
    ll ct = um[v[pos]];
    cur_ans -= (ct*ct*v[pos]);
    um[v[pos]]++;
    ++ct;
    cur_ans += (ct*ct*v[pos]);
}
void remove(ll pos){
    ll ct = um[v[pos]];
    cur_ans -= (ct*ct*v[pos]);
    um[v[pos]]--;
    --ct;
    cur_ans += (ct*ct*v[pos]);
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n; cin>>n;
    int queries; cin>>queries;

    for(int i=0; i<n; ++i) cin>>v[i];

    rootN = sqrt(n);

    for(int i=0; i<queries; ++i){
        ll l,r;cin>>l>>r;
        q[i].l = l;
        q[i].r = r;
        q[i].idx = i;
    }

    sort(q, q+queries, compare);
    vector<ll> ans(queries);
    ll cur_l=0, cur_r=-1, l, r;


    for(int i=0; i<queries; ++i){
        l = q[i].l;
        r = q[i].r;

        --l; --r;
        while(cur_r < r){
            cur_r++;
            add(cur_r);
        }
        while(cur_l > l){
            --cur_l;
            add(cur_l);
        }
        while(cur_l < l){
            remove(cur_l);
            ++cur_l;
        }
        while(cur_r > r){
            remove(cur_r);
            --cur_r;
        }
        ans[q[i].idx] = cur_ans;
    }

    for(int i=0; i<queries; ++i){
        cout<<ans[i]<<nl;
    }

    return 0;
}
