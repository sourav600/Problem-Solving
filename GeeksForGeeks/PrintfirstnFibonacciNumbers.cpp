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

ll mod(ll a){
    return ((a%M)+M)%M;
}
class Solution
{
    ll solve(int n, vector<ll> &v){
        if(n==0) return 0;
        if(n==1) {v[n-1]=1; return 1;}
        if(v[n-1]!=-1) return v[n-1];
        else return v[n-1]=solve(n-1,v)+solve(n-2,v);
    }
public:
    vector<long long> printFibb(int n) 
    {
        vector<ll> v(n,-1);
        solve(n,v);
        return v;
    }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        vector<long long> ans = obj.printFibb(n);
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }

return 0;
}