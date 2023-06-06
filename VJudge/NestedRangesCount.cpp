#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,n) for(int i=0; i<n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define all(x) x.begin(), x.end()
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>

typedef long long ll;
typedef unsigned long long  ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const ll M = 1e9 + 7;
const ll N = 1e5 + 10;

void solve(int tc){

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    vector<pair<pair<int,int> ,int > > vpp(n); 
    vi ans1(n),ans2(n);
    int a,b;
    For(i,n){
    	cin>>a>>b;
    	vpp[i].first.first = a;
    	vpp[i].first.second = -b;
    	vpp[i].second=i;
    }
    sort(all(vpp));

    //For(i,n) cout<<vpp[i].first.first<<" "<<vpp[i].first.second<<" "<<vpp[i].second<<nl;

    ordered_set s;
    for(int i=n-1;i>=0;--i){
    	vpp[i].first.second = -vpp[i].first.second;
    	ans1[vpp[i].second] = s.order_of_key({vpp[i].first.second,n});
    	s.insert({vpp[i].first.second,i});
    } s.clear();
    For(i,n) cout<<ans1[i]<<" ";
    cout<<nl;

    For(i,n){
    	ans2[vpp[i].second] = s.size() - s.order_of_key({vpp[i].first.second - 1 ,n});
    	s.insert({vpp[i].first.second,i});
    }
    For(i,n) cout<<ans2[i]<<" ";
    cout<<nl;
return 0;
}




