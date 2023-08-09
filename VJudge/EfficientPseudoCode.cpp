#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;
const ll M = 1e9 + 7;

vector<ll> v;
unordered_map<ll,ll> um;

ll mod(ll a){
    return ((a%M)+M)%M;
}

ll binExp(ll a, ll b){
	ll ans = 1;
	while(b){
		if(b&1){
			ans = mod(ans*a);
		}
		a = mod(a*a);
		b>>=1;
	}
	return ans;
}

void primeFactor(ll a){
	for(ll i=2; i*i<=a; ++i){
		if(a%i==0){
			v.push_back(i);
			while(a%i==0){
				++um[i];
				a /= i;
			}
		}
	}
	if(a>1){ //last prime number check
		v.push_back(a);
		++um[a];
	}
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,a,b; cin>>t;
    for(int k=0; k<t;++k){
    	v.clear(); um.clear();
		cin>>a>>b;
		primeFactor(a);

		ll ans=1;
	    for(auto p:v){
	        ll numeretor = binExp(p,(um[p]*b)+1) - 1;
	        ll denominator = binExp(p-1,M-2);
	        ans = mod(mod(ans)*mod(numeretor*denominator));
	    }
        cout<<"Case "<<k+1<<": "<<ans<<nl;
    }

return 0;
}
