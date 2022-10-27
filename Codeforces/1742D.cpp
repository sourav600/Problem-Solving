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

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

void solve(int tc){
    int n,x; cin>>n;
    set<int> s;
    unordered_map<int, int> um;
    For(i,n){
        cin>>x;
        s.insert(x);
        um[x]=i+1;
    }
    int mx=INT_MIN;
    for(auto it1=s.begin(); it1!=s.end();++it1){
        for(auto it2=it1; it2!=s.end();++it2){
            if(gcd((*it1),(*it2))==1){
                mx = max(mx, (um[*it1]+um[*it2]));
            }
        }
    }
    if(mx==INT_MIN)cout<<-1<<nl;
    else cout<<mx<<nl;
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