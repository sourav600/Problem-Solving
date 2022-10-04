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
typedef long long ll;
typedef unsigned long ulong;
const ll M = 1000000007;

void solve(int tc){
    ll n,count=0; cin>>n;
    vl a(n), b(n);
    For(i,n) cin>>a[i];
    For(i,n) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    priority_queue<int> q1, q2;
    For(i,n){
        q1.push(a[i]);
        q2.push(b[i]);
    }
    while(!q1.empty() && !q2.empty()){
        if(q1.top()==q2.top()){
            q1.pop(); q2.pop();
        }
        else if(q1.top()>q2.top()){
            ++count;
            q1.push(log10(q1.top())+1);
            q1.pop();
        }
        else {
            ++count;
            q2.push(log10(q2.top())+1);
            q2.pop();
        }
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