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
    stack<int> st;
    int n; cin>>n;
    vi a(n),b(n);
    For(i,n)cin>>a[i];
    For(i,n)cin>>b[i];
    For(i,n)cout<<abs(a[i] - (*lower_bound(b.begin(),b.end(),a[i])))<<" ";
    cout<<nl;
    int j=n-1;
    for(int i=n-1;i>=0;--i){
        if(a[i+1] > b[i]) j=i;
        st.push(abs(a[i]- b[j]));
    }
    while(!st.empty()){ cout<<st.top()<<" "; st.pop();}
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