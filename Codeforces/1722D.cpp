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

void solve(int tc){
    ll n,sum=0; cin>>n;
    string s; cin>>s;
    vi L,R;
    For(i,n){
        s[i]=='L'? L.pb(i): R.pb(i);
        if(s[i]=='L') sum += i;
        else sum += n-(i+1);
    }
    cout<<"Sum1: "<<sum<<nl;
    int l=0,r=R.size()-1;
    //cout<<R.size()<<nl;
    for(int i=0;i<n;++i){
        if(L[l]<R[r]){
            sum -= (L[l] + n-(R[r]+1));
            cout<<"Sum2: "<<sum<<nl;
            sum += n-L[l]+1;
            cout<<"Sum3: "<<sum<<nl;
            sum += R[r];
            ++l; --r;
        }
        cout<<sum<<" ";
    }
    cout<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}