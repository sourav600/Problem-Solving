#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(ll i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;

void solve(ll tc){
    ll n; cin>>n;
    ll one=0,ans=0,zero=0,count=0;
    vl v(n),zeroV,oneV;
    For(i,n){
        cin>>v[i];
        if(v[i]) oneV.pb(i);
        else {
            zeroV.pb(i);
            ans+=oneV.size();
        }
    }
    //cout<<zeroV.size()<<" "<<oneV.size()<<nl;
    ll temp=ans,left=INT_MIN,right=INT_MIN;
    if(oneV.size()!=0) left = oneV.size()-1 - (n-1-oneV[oneV.size()-1]);
    if(zeroV.size()!=0)right = zeroV.size()-1-zeroV[0];
    
    temp += max(left,right); 
    ans = max(temp,ans);
    //For(i,zeroV.size())cout<<zeroV[i]<<" "; cout<<nl;
    //For(i,oneV.size())cout<<oneV[i]<<" "; cout<<nl;
    cout<<ans<<nl;

   
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    ll t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}