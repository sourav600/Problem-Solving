#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,a,n) for(int i=a; i<=n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define all(x) x.begin(), x.end()
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

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
    cin.ignore();
    string s; cin>>s;
    unordered_map<char, int> um;
    for(int i=0; i<s.size();++i){
    	++um[s[i]];
    }
    int l=0, r=n-1;
    int len = n;
    while(l<r){
    	if(um[s[l]] ==1 && um[s[r]] ==1) break;
    	if(um[s[l]] > 1){
    		--um[s[l]];
    		++l;
    		--len;
    	}
    	if(um[s[r]] > 1){
    		--um[s[r]];
    		--r;
    		--len;
    	}	
    }
    cout<<l<<" "<<r<<" ";
    cout<<len<<nl;

return 0;
}





