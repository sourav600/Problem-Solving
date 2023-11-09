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

void SOURAV(){
    int n; cin>>n;
    multiset<int> l,r;
    char ch;
    int a,b;
    For(i,n){
        cin>>ch>>a>>b;
        if(ch=='+'){
            l.insert(b);
            r.insert(a);
            //cout<<(*l.begin())<<" "<<*(--r.end())<<nl;
        }
        else{
            auto it1 = r.find(a);
            auto it2 = l.find(b);
            r.erase(it1);
            l.erase(it2);
        }
        if(l.empty() || r.empty()){
            cout<<"NO\n"; continue;
        }
        int mx_end = *l.begin();
        int mn_start = *(--r.end());
        if(mx_end<mn_start) cout<<"YES\n";
        else cout<<"NO\n";

    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    // int t,tc=1; cin>>t;
    // while(t--)
    SOURAV();

return 0;
}



