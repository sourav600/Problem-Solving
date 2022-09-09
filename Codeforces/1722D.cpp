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
    if(n==1){cout<<0<<nl; return;}
    vi L,R;
    For(i,n){
        s[i]=='L'? L.pb(i+1): R.pb(i+1);
        if(s[i]=='L') sum += i;
        else sum += n-(i+1);
    }
    int l=0,r=R.size()-1;

    for(int i=0;i<n;++i){
        if(R[r]>(n/2) && L[l]>(n/2)){
            if(L[l]<n-R[r]){
                sum = (sum-i)+n-i-1;
                l++;
            }
            else if(L[l]>n-R[r]){
                sum = sum+i+n-i-1;
                r--;
            }
        }
    cout<<sum<<" ";
    }
    cout<<nl;
    L.clear(); R.clear();
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