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
    int n; cin>>n;
    cin.ignore();
    string s;
    cin>>s;
    if(n&1){
        cout<<-1<<nl;
        return;
    }
    deque<char> dq;
    For(i,n) dq.push_back(s[i]);

    vi ans;
    int ct=0;
    int l=0, r=n;
    while(!dq.empty()){
        if(ct>300){
            cout<<-1<<nl;
            return;
        }
        if(dq.front()==dq.back()){
            ++ct;
            if(dq.front()=='0'){
                ans.push_back(r);
                dq.pop_front();
                dq.push_back('0');
                ++l;
                r++;
            }
            else{
                ans.push_back(l);
                dq.pop_back();
                dq.push_front('1');
                ++l;
                r++;
            }
        }
        else{
            dq.pop_back();
            dq.pop_front();
            ++l;
            --r;
        }
    }
    cout<<ans.size()<<nl;
    For(i,ans.size()) cout<<ans[i]<<" ";
    cout<<nl;
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



