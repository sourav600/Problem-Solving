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
    int n,m;cin>>n>>m;
    char arr[n][m];
    For(i,n){
        For(j,m) cin>>arr[i][j];
    }

    //check odd number of L,R,U,D in row
    For(i,n){
        int ct = 0;
        For(j,m){
            if(arr[i][j]!='.') ++ct;
        }
        if(ct&1){
            cout<<-1<<nl;
            return;
        }
    }

    //check odd number of L,R,U,D in collum
    For(i,m){
        int ct = 0;
        For(j,n){
            if(arr[j][i]!='.') ++ct;
        }
        if(ct&1){
            cout<<-1<<nl;
            return;
        }
    }

    char ans[n][m];
    For(i,n){
        int vertical_ct = 0, black=0;
        For(j,m){
            if(arr[i][j]=='U' || arr[i][j]=='D') {
                ++vertical_ct;
            }

            if(arr[i][j]=='.') ans[i][j] = '.';
            if(arr[i][j]=='U'){
                if(black&1){
                    ans[i][j] = 'B';
                    ans[i+1][j] = 'W';
                }else{
                    ans[i][j] = 'W';
                    ans[i+1][j] = 'B';
                }
                ++black;
            }
        }
        if(vertical_ct & 1){
            cout<<-1<<nl;
            return;
        }
    }

    For(i,m){
        int black=0;
        For(j,n){
            if(arr[j][i]=='L'){
                if(black&1){
                    ans[j][i] = 'B';
                    ans[j][i+1] = 'W';
                }else{
                    ans[j][i] = 'W';
                    ans[j][i+1] = 'B';
                }
                ++black;
            }
        }
    }
    //cout<<"YES\n";
    For(i,n){
        For(j,m) cout<<ans[i][j];
        cout<<nl;
    }

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



