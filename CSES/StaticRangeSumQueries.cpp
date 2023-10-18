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

ll arr[N];
ll block[1000];
ll blk_sz;

ll query(int l, int r)
{
    ll sum = 0;
    while (l < r and l % blk_sz != 0 and l != 0) {
        //first block
        sum += arr[l];
        l++;
    }
    while (l + blk_sz - 1 <= r) {
        //completely overlapped blocks
        sum += block[l / blk_sz];
        l += blk_sz;
    }
    while (l <= r) {
        //last block
        sum += arr[l];
        l++;
    }
    return sum;
}

void squareRoot(int input[], int n)
{
    int blk_idx = -1;
    blk_sz = sqrt(n);
    for (int i = 0; i < n; i++) {
        arr[i] = input[i];
        if (i % blk_sz == 0) {
            blk_idx++;
        }
        //customize section
        block[blk_idx] += arr[i];
    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,q; cin>>n>>q;
    int a[n];
    For(i,n) cin>>a[i];

    squareRoot(a,n);

    while(q--){
        int l,r; cin>>l>>r;
        cout<<query(--l,--r)<<nl;
    }

return 0;
}



