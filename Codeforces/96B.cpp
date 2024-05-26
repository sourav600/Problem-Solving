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
#define allr(x) x.rbegin(), x.rend()
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
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1};int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction
ll mod(ll a){ return ((a%M)+M)%M;}

void SOURAV(int tc){

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll n; cin>>n;
    int digit = log10(n)+1;

    if(digit&1){ //if the number lenght is odd then just print the next event length first super lucky number
        ++digit;
        For(i, digit/2) cout<<4;
        For(i, digit/2) cout<<7;
        cout<<nl;
    }
    else{
        ll mx=0;
        For(i, digit/2) mx = (mx*10) + 7;
        For(i, digit/2) mx = (mx*10) + 4;
        //cout<<mx<<nl;
        if(n>mx) { //if the number is larger than the maximum number with coresponding digit, then print the first number of digit+2 length
            digit += 2;
            For(i, digit/2) cout<<4;
            For(i, digit/2) cout<<7;
            cout<<nl;
        }
        else{ //otherwise find the number using bit manipulation, generating every possible number with digit length, (where no. of zeros equals no of ones) and update the samll one
            ll l=n, r = mx;
            ll ans = 1e14;
            for(ll i=0; i<(1<<digit); ++i){
                if(__builtin_popcountll(i)*2 == digit){
                    ll b = i;
                    ll num=0, d = digit;
                    while(d--){
                        if(b&1){
                            num = (num*10)+7;
                        }else{
                            num = (num*10)+4;
                        }
                        b>>=1;
                    }
                    //cout<<num<<" ";
                    if(num >= n) ans = min(ans, num);
                }
            }
            cout<<ans<<nl;
        }
    }

return 0;
}



