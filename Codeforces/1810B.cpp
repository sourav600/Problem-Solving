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
    int n; cin>>n;
    if(n%2==0){
        cout<<-1<<nl;
        return;
    }
    int x=40;
    vi v;
    while( n>1){
        int temp = (n-1)/2;
        if(temp&1){
            v.pb(2);
            n = (n-1)/2;
        }
        else{
            v.pb(1);
            n = (n+1)/2;
        }
    }
    if(v.size()>40){
        cout<<-1<<nl;
        return;
    }
    cout<<v.size()<<nl;
    for(int i=v.size()-1; i>=0;--i) cout<<v[i]<<" ";
    cout<<nl;
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