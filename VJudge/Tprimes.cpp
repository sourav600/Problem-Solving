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
#define vpp vector<pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
const ll INF = 1e9 + 7;
const ll N = 1e6 + 10;

vi v(N,true);
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
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
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