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

void SOURAV(int tc){

}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll n; cin>>n;
    vl a, b;
    ll odd_sum=0,even_sum=0;
    for(int i=1; i<=n; ++i){
        if(i&1) {odd_sum += i; a.push_back(i);}
        else {even_sum += i; b.push_back(i);}
    }

    ll total_sum = odd_sum+even_sum;
    if(total_sum&1 || abs(odd_sum-even_sum)&1) cout<<"NO\n";
    else{
        if(n&1){
            ll r = (odd_sum - even_sum);
            r /= 2;
            int it1=1, it2=0, p=3, q=2;
            while(r--){
                a[it1++] = q;
                b[it2++] = p;
                p+=2; q+=2;
            }
        }
        else{
            ll r = (even_sum - odd_sum);
            r /= 2;
            int it1=0, it2=0, p=1, q=2;
            while(r--){
                a[it1++] = q;
                b[it2++] = p;
                p+=2; q+=2;
            }
        }
        cout<<"YES\n";
        cout<<a.size()<<nl;
        For(i,a.size()) cout<<a[i]<<" ";
        cout<<nl<<b.size()<<nl;
        For(i,b.size()) cout<<b[i]<<" ";
    }


return 0;
}



