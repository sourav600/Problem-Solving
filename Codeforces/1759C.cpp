#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;

void solve(int tc){
    ll l,r,x;
    cin>>l>>r>>x;
    ll a,b;
    cin>>a>>b;
    ll ans=0;
    if(a==b){cout<<0<<nl; return;}
    if(abs(b-l) < x && abs(b-r)<x){cout<<-1<<nl; return;}
    if(b-a > 0){
        ll dif = b-a;
        ll temp = a-x, temp2 = a-x;
        if(a+x>r && temp<l){cout<<-1<<nl; return;}
        if(dif>=x){cout<<1<<nl; return;}
        if(b+x<=r || temp2>=l){cout<<2<<nl; return;}
        else{cout<<3<<nl;} 
    }
    else{
       ll t1=a+x, t2=a-x, t3=b-x;
       ll dif = a-b;
       if(t1>r && t2<l){cout<<-1<<nl; return;}
       if(dif>=x){cout<<1<<nl; return;}
       if(a+x <= r ||  t3>=l){cout<<2<<nl; return;}
       else cout<<3<<nl;
    }
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