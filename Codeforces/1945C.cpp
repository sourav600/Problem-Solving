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
    int n; cin>>n;
    int n2 = ceil(n/2.0);
    cin.ignore();
    string s;
    cin>>s;
    int ct1=0,ct2=0;

    int one=0,zero=0;
    For(i,n) if(s[i]=='1') ++one;
    zero = n - one;

    int l=1, r=n-1;
    int l_zero= 0, l_one = 0;
    int r_zero = zero, r_one=one;

    int ans;
    if(one >= n2) ans = 0;
    else ans = n;
    //cout<<ans<<" ";

    for(int i=0; i<n; ++i){
        bool flag = true;

        if(s[i]=='0'){
            l_zero++;
            r_zero--;
        }
        else{
            l_one++;
            r_one--;
        }

        if(l_zero < l_one) flag=false;
        if(r_one < r_zero) flag = false;


        if(flag){
            if( abs(n-(2*ans)) > abs(n-(2*(i+1)))) ans = i+1;
        }
        ++l;
        --r;
    }
    cout<<ans<<nl;
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



