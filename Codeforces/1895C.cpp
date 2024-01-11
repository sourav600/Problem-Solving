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

bool comp(string &a, string &b){
    return a.size() < b.size();
}

void SOURAV(int tc){
    int n; cin>>n;
    cin.ignore();
    vs v(n);
    map<pair<int,int>, int> m, ct;
    For(i,n){
        cin>>v[i];
    }
    sort(all(v), comp);
    ll ans=0;

    For(i,n){
        string cur = v[i];
        string rev = v[i];
        reverse(rev.begin(), rev.end());
        int len = v[i].size();
        int mx_len =  min(len * 2, 10);
        int x;
        (len%2==1) ? x=1 : x=2;
        len += x;
        //cout<<len<<" l "<<mx_len<<" "<<cur<<nl;
        while(len <= mx_len){
            int sum = 0;
            For(j, len/2) sum += cur[j]-'0';
            for(int j=len/2; j<cur.size();++j) sum-=cur[j]-'0';
            ans+=m[{x,sum}];

            sum=0;
            For(j, len/2) sum += rev[j]-'0';
            for(int j=len/2; j<rev.size();++j) sum-=rev[j]-'0';
            ans+=m[{x,sum}];

            len += 2;
            x+=2;
        }

        int sum=0;
        For(j,v[i].size()){
            sum += v[i][j]-'0';
        }
        m[{v[i].size(),sum}]++;
    }
    cout<<ans+n<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);


    SOURAV(1);

return 0;
}



