#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
const int N = 2e5+10;

ll rootN;
unordered_map<ll,ll> um;

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


// #include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// using namespace std;

// #define nl '\n'
// #define pi acos(-1)
// #define ll long long
// #define For(i,n) for(ll i=0; i<n; i++)
// #define all(x) x.begin(), x.end()
// #define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>

// typedef unsigned long long  ull;
// typedef pair<int,int> pii;
// typedef pair<ll,ll> pll;
// typedef vector<int> vi;
// typedef vector<string> vs;
// typedef vector<ll> vl;
// typedef vector<pii> vpi;
// typedef vector<pll> vpl;
// const ll M = 1e9 + 7;
// const ll N = 2e5 + 10;
// vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
// ll mod(ll a){ return ((a%M)+M)%M;}

// vector<char> arr(N); // original array
// vector<int> block(10000); // decomposed array
// int n,blk_sz; // block size
// vi v(N), blk_one(N), blk_zero(N), swap_ct(N);
// string s;

// void reset(){
//     For(i,10000) block[i]=0;
//     For(i,N) v[i]=0;
//     For(i,N) blk_one[i]=0;
//     For(i,N) blk_zero[i]=0;
//     For(i,N) swap_ct[i]=0;
// }

// void update(int l , int r){
//     --l; --r; //make 0-base index
//     int l1=l, r1=r;

//     //first block
//     if(l <= r && l % blk_sz != 0 ) {
//         int p = l/blk_sz;
//         blk_one[p]=0, blk_zero[p]=0;
//         for(int i=p*blk_sz ; i< (p*blk_sz)+blk_sz && i<n; ++i){
//             if(i>=l1 && i<=r1){
//                 if(swap_ct[p]%2){
//                     if(s[i]=='0') blk_zero[p] ^= v[i];
//                     else blk_one[p] ^= v[i];
//                 }
//                 else{
//                     if(s[i]=='0') {
//                         s[i] = '1';
//                         blk_one[p] ^= v[i];
//                     }
//                     else {
//                         s[i]= '0';
//                         blk_zero[p] ^= v[i];
//                     }
//                 }
//             }
//             else{
//                 if(swap_ct[p]%2){
//                     if(s[i]=='0') {
//                         blk_one[p] ^= v[i];
//                         s[i] = '1';
//                     }
//                     else {
//                         blk_zero[p] ^= v[i];
//                         s[i] = '0';
//                     }
//                 }
//                 else{
//                     if(s[i]=='0') blk_zero[p] ^= v[i];
//                     else blk_one[p] ^= v[i];
//                 }
//             }
//         }
//         l = (p*blk_sz)+blk_sz;
//         swap_ct[p] = 0;
//     }

//     //full block
//     while (l + blk_sz - 1 <= r) {
//         swap_ct[l/blk_sz]++;
//         l += blk_sz;
//     }

//     //last block
//     if(l <= r) {
//             int p = l/blk_sz;
//             blk_one[p]=0, blk_zero[p]=0;
//             for(int i=p*blk_sz ; i< (p*blk_sz)+blk_sz && i<n; ++i){
//                 if(i>=l1 && i<=r1){
//                     if(swap_ct[p]%2){
//                         if(s[i]=='0') blk_zero[p] ^= v[i];
//                         else blk_one[p] ^= v[i];
//                     }
//                     else{
//                        if(s[i]=='0') {
//                             s[i] = '1';
//                             blk_one[p] ^= v[i];
//                         }
//                         else {
//                             s[i]= '0';
//                             blk_zero[p] ^= v[i];
//                         }
//                     }
//                 }
//                 else{
//                     if(swap_ct[p]%2){
//                         if(s[i]=='0') {
//                             blk_one[p] ^= v[i];
//                             s[i] = '1';
//                         }
//                         else {
//                             blk_zero[p] ^= v[i];
//                             s[i]='0';
//                         }
//                     }
//                     else{
//                         if(s[i]=='0') blk_zero[p] ^= v[i];
//                         else blk_one[p] ^= v[i];
//                     }
//                 }
//             }
//             swap_ct[p] = 0;
//     }
// }

// int query(int p)
// {
//     int ans = 0, blk_ct = n/blk_sz;
//     if(n&blk_ct!=0) ++blk_ct;
//     //cout<<blk_ct<<nl;
//     int l=0, r=n;
//     for(int i=0;i<=blk_ct;++i){
//         if(p==0){
//             if(swap_ct[i]%2){
//                 ans ^= blk_one[i];
//             }
//             else ans ^= blk_zero[i];
//         }
//         else {
//             if(swap_ct[i]%2) ans ^= blk_zero[i];
//             else ans ^= blk_one[i];
//         }
//     }
//     return ans;
// }

// void SR_decomposition(string s, int n)
// {
//     int blk_idx = -1;
//     blk_sz = sqrt(n);
//     for (int i = 0; i < n; i++) {
//         arr[i] = s[i];
//         if (i % blk_sz == 0) {
//             blk_idx++;
//         }
//         if(s[i]=='0')blk_zero[blk_idx] ^= v[i];
//         else blk_one[blk_idx] ^= v[i];

//     }
// }

// void SOURAV(int tc){
//     reset();

//     cin>>n;
//     For(i,n) cin>>v[i];
//     cin.ignore();
//     cin>>s;
//     SR_decomposition(s,n);

//     // For(i,n) cout<<arr[i]<<" ";
//     // cout<<nl;
//     //For(i, sqrt(n)) cout<<block[i]<<" ";
//     ll choise,l,r,a;
//     int q; cin>>q;
//     For(i,q){
//         cin>>choise;
//         if(choise==1){
//             cin>>l>>r;
//             update(l,r);
//         }
//         else{
//             cin>>a;
//             cout<<query(a)<<" ";
//         }
//     }
//     cout<<nl;
// }

// int main(){
//     #ifndef ONLINE_JUDGE
//     freopen("../Input.txt", "r", stdin);
//     freopen("../Output.txt", "w", stdout);
//     #endif
//     ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

//     int t,tc=1; cin>>t;
//     while(t--)
//     SOURAV(tc++);

// return 0;
// }



