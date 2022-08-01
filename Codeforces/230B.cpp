#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

vi v(1e6+7,true);
void seive(){
    v[0]=v[1]=false;
    for(int i=2; i*i<=1e6;i++){
        if(v[i]){
            for(int j=i*i; j<=1e6; j+=i) v[j]=false;
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    
    ll t,n; cin>>t;
    seive();
    while (t--)
    {
        cin>>n;
        ll r=(int)sqrt(n);
        if(r*r==n && v[r]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
return 0;
}