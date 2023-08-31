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

bool mark[N];
vl primes;
void seive(){
    for(ll i=3; i*i<=N; i+=2){
        if(mark[i]==0){
            for(ll j=i*i; j<N; j += (i+i)){
                mark[j] = 1;
            }
        }
    }

    for(ll i=11; i<100; i+=2){
        if(mark[i]==0 ) primes.push_back(i);
    }
}



void SOURAV(int tc){
	string s; cin>>s;
	for(auto it: primes){
		int a = (it/10)%10;
		int b = (it%10);
		//cout<<a<<" "<<b<<nl;
		bool foundA=false, foundB=false;
		for(int i=0; i<s.size(); ++i){
			if(s[i]-'0'==a) foundA= true;
			else if(foundA==true && s[i]-'0'==b) foundB=true;
			if(foundA && foundB) {
				cout<<it<<nl;
				return;
			}
		}
	}
		

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    seive();
    int t,tc=1; cin>>t;
    while(t--)
    SOURAV(tc++);

return 0;
}



