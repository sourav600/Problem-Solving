#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;
const ll M = 1000000007;

ll mod(ll a){
    return ((a%M)+M)%M;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    ll n,k,b,s;
    while(t--){
        cin>>n>>k>>b>>s;
        vl v;
        ll check=((k*(b+1))-1)+((k-1)*(n-1));
        if(check<s || ceil(s/k)<b) cout<<"-1\n";
        else {
            if(k*(b+1)>s) v.pb(s);
            else{
                v.pb(k*(b+1)-1);
                s -= (k*(b+1)-1);
                while(s>0){
                    v.pb(min(k-1,s));
                    s-=k-1;
                }
            }
            sort(v.begin(),v.end());
            for(int i=0; i<n-v.size();++i) cout<<"0 ";
            For(i,v.size()) cout<<v[i]<<" ";
            cout<<nl;
        }

    }
return 0;
}