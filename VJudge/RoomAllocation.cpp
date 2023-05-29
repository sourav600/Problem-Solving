#include<bits/stdc++.h>

using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,a,n) for(int i=a; i<n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define all(x) x.begin(), x.end()

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

    int n,a,b; cin>>n;
    vi ans(n);
    vector<pair<pair<int,int>, int> > roomIn;
    vector<pair<int, int> > roomOut;

    For(i,0,n){
    	cin>>a>>b;
    	roomIn.push_back({{a,b},i});
    	roomOut.push_back({b,i});
    }
    sort(all(roomIn));
    sort(all(roomOut));
    // for(auto it : roomIn){
    // 	cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<nl;
    // }
    int cur_room = 0;
    auto it = roomOut.begin();
    for(auto it2 : roomIn){
    	if(it->first < it2.first.first){
    		ans[it2.second] = ans[it->second];
    		++it;
    	}else{
    		ans[it2.second] = ++cur_room;
    	}
    }
    cout<<cur_room<<nl;
    For(i,0,n) cout<<ans[i]<<" ";
    cout<<nl;

return 0;
}





