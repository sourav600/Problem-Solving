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
    int n,x,count=0; cin>>n;
    vi zero,one;
    For(i,n) {
        cin>>x;
        if(x) one.pb(i+1);
        else zero.pb(i+1);
    }
    int i=0,j=0;
    sort(zero.rbegin(),zero.rend());

    if(zero.size()==0 || one.size()==0){
        cout<<0<<nl; return;
    }
    while(zero[i]>one[i] && i<zero.size() && i<one.size()){
        count++;
        ++i;
    }
    cout<<count<<nl;
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