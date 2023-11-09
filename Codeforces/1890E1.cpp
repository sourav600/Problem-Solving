#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>

typedef unsigned long long  ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const ll M = 1e9 + 7;
const ll N = 2e5 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}

ll rootN;
vector<int> um(1000001);
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

void Mos(){
    int sum=0, cur_ans = 0;
    int n,queries,k;
    cin>>n>>queries>>k;
    for(int i=0; i<n; ++i) v[i]=i+1;
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
        //cout<<l<<" "<<r<<"K"<<nl;
        --l; --r;
        cur_r = max(cur_r,r);
        cur_l = min(cur_l,l);
        cur_ans += cur_r-cur_l+1;
        if(i>0){
            sum += n - cur_ans;

            if(r<q[i-1].r){
                cur_r = r;
                cur_ans -= (q[i-1].r - r);
            }
            if(l>q[i-1].l){
                cur_l = l;
                cur_ans -= (l - q[i-1].l);
            }
        }

        //llll
        // while(cur_r < r){
        //     cur_r++;
        //     //add(cur_r);
        //     if(i==0)++cur_ans;
        //     else{
        //         if(l < q[i-1].l) {
        //             cur_l =
        //         }
        //     }
        // }
        // while(cur_l > l){
        //     --cur_l;
        //     //add(cur_l);
        //     if(i==0)++cur_ans;
        // }
        // while(cur_l < l){
        //     //remove(cur_l);
        //     if(i==0)--cur_ans;
        //     ++cur_l;
        // }
        // while(cur_r > r){
        //     //remove(cur_r);
        //     if(i==0)--cur_ans;
        //     --cur_r;
        // }

        // if(i>0){
        // cout<<cur_ans<<nl;
        //     sum += n-cur_ans;
        //     cur_ans += max(0 , q[i].l - q[i-1].l);
        //     cur_ans += max(0 , q[i-1].r - q[i].r);

        // }
    }
    cout<<sum<<nl;
    // for(int i=0; i<queries; ++i){
    //     cout<<ans[i]<<nl;
    // }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    Mos();

return 0;
}



