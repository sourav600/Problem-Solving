#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define all(x) x.begin(), x.end()
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>

typedef unsigned long long  ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const ll M = 1e9 + 7;
const ll N = 2e5 + 10;
vector<pair<int, int> > movements = { { +1, 0}, { -1, 0}, {0, +1}, {0, -1} };
ll mod(ll a) { return ((a % M) + M) % M;}

void SOURAV(int tc) {
    ll a, b;
    cin>>a>>b;
    cin.ignore();

    string s;
    cin>>s;
    //cout<<s<<nl;
    ll one = 0, zero = 0;
    For(i, s.size()) {
        if (s[i] == '0') ++zero;
        else if (s[i] == '1') ++one;
    }
    //cout<<one<<" "<<zero<<nl;
    ll need_0 = a - zero;
    ll need_1 = b - one;
    ll l = 0, r = s.size() - 1;
    while(l<=r){
        if((s[l]=='?' || s[r]=='?') && s[l]!=s[r]){
            if(s[l]=='1' || s[r]=='1'){
                if(need_1 >= 1) {
                    s[l]=s[r]='1';
                    --need_1;
                }else{
                    cout<<-1<<nl;
                    return;
                }
            }
            else if(s[l]=='0' || s[r]=='0'){
                if(need_0 >= 1) {
                    s[l]=s[r]='0';
                    --need_0;
                }else{
                    cout<<-1<<nl;
                    return;
                }
            }
        }
        ++l; --r;
    }

    l=0; r=s.size()-1;
    while (l < r) {
        if((s[l]=='0' && s[r]=='1') || (s[l]=='1' && s[r]=='0')){
            cout<<-1<<nl;
            return;
        }
        else if (s[l] == '?' && s[r] == '?') {
            if (need_0 >= 2) {
                s[l] = s[r] = '0';
                need_0 -= 2;
            } else if(need_1 >= 2) {
                s[l] = s[r] = '1';
                need_1 -= 2;
            }else{
                cout<<-1<<nl;
                return;
            }
        }
        ++l; --r;
    }
    if(l==r && s[l]=='?'){
        if(need_0 + need_1 != 1){
            cout<<-1<<nl;
            return;
        }
        else if(need_1==1){
            s[l]='1';
            need_1--;
        }else{
            s[l]='0';
            need_0--;
        }
    }
    if(need_1==0 && need_0==0) cout<<s<<nl;
    else cout<<-1<<nl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t, tc = 1; cin >> t;
    while (t--)
    SOURAV(tc++);

    return 0;
}



