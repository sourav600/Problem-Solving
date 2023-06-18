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
const ll N = 2e5 + 10;

void solve(int tc){

}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    cin.ignore();

    deque<int> dq1, dq2;
    int n=0, m=0;
    while(t--){
    	string s;
    	int x;
    	cin>>s>>x;
    	if(s=="push_front"){
    		dq1.push_front(x);
    		++n;
    	}
    	else if(s=="push_back"){
    		dq2.push_back(x);
    		++m;
    	}
    	else if(s=="push_middle"){
    		if(n==m){
    			dq1.push_back(x);
    			++n;
    		}
    		else {
    			dq2.push_front(x);
    			++m;
    		}
    	}
    	else if(s=="get"){
    		if(x<n){
    			cout<<dq1[x]<<nl;
    		}
    		else cout<<dq2[x-n]<<nl;
    	}

    	//first queue is always equal or just one element larger than 2nd queue
    	if(n-m > 1){
    		int last = dq1.back();
    		dq1.pop_back();
    		--n;
    		dq2.push_front(last);
    		++m;
    	}
    	if(m-n > 0){
    		int frst = dq2.front();
    		dq2.pop_front();
    		--m;
    		dq1.push_back(frst);
    		++n;
    	}
    }
    

return 0;
}



