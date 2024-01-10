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
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n; cin>>n;
    cin.ignore();
    string s; cin>>s;

    int l=0, o=0;
    int pl=0, po=0;
    For(i,n){
        if(s[i]=='L'){
            ++l;
            pl = i+1;
        }
        else{
            ++o;
            po = i+1;
        }
    }

    if(s=="LLOO" || s=="OOLL"){
        cout<<2<<nl;
        return 0;
    }
    if(l==2 && o==2){
        cout<<-1<<nl;
        return 0;
    }
    if(l==2){
        if(s[0]=='O' && o!=2) cout<<1<<nl;
        else if(s[n-1]=='L') cout<<-1<<nl;
        else cout<<pl<<nl;
    }
    else if(o==2){
        if(s[0]=='L' && l!=2) cout<<1<<nl;
        else if(s[0]=='O' && s[n-1]=='O') cout<<-1<<nl;
        else cout<<po<<nl;
    }
    else cout<<1<<nl;

return 0;
}



