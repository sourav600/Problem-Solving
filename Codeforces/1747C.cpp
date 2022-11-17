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
    vl v(n);
    For(i,n){
       cin>>v[i];
    }
    if(v[0]==1) cout<<"Bob\n";
    else if(*min_element(v.begin(),v.end())==1) cout<<"Alice\n";
    else{
        int x = (*min_element(v.begin(),v.end()));
        if(x==v[0])cout<<"Bob\n";
        else cout<<"Alice\n";
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