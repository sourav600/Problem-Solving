#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define vpp vector<pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
const ll INF = 1e9 + 7;
const ll N = 1e5 + 10;



int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int n,k;
    cin>>n>>k;
    vi v(n+1);
    For(i,n) cin>>v[i];
    queue<int> q;
    ordered_set os;
    For(i,k){
    	q.push(v[i]);
    	os.insert(v[i]);
    }
    if(k&1){
        cout<<*os.find_by_order(k/2)<<" ";
    }else{
        cout<<*os.find_by_order(k/2-1)<<" ";
    }

    for(int i=k; i<n; ++i){
    	int cur = q.front();
    	q.pop();
    	os.erase(os.find_by_order(os.order_of_key(cur)));
    	os.insert(v[i]);
    	q.push(v[i]);
    	if(k&1){
    		cout<<*os.find_by_order(k/2)<<" ";
    	}else{
    		cout<<*os.find_by_order(k/2-1)<<" ";
    	}
    }


return 0;
}