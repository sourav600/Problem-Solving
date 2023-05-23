#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define For(i,a,n) for(int i=a; i<=n; i++)
#define mem(a,b) memset(a,b,sizeof(a))
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

	cout<<"Case "<<tc<<": ";
	ll arr[5],brr[5];

    scanf("%lld.%lld.%lld.%lld",&arr[1],&arr[2],&arr[3],&arr[4]);
    scanf("%lld.%lld.%lld.%lld",&brr[1],&brr[2],&brr[3],&brr[4]);

    For(i,1,4){
    	ll p=0,decimal = 0;
    	while(brr[i]>0){
    		decimal += (brr[i]%10) *(1<<p);
    		brr[i] /= 10;
    		++p;
    	}
    	if(decimal!=arr[i]){
    		cout<<"No\n";
    		return;
    	}
    }
    cout<<"Yes\n";
    

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}