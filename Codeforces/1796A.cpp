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
    //cin.ignore();
    string s,s2="FBFFBFFBFBFFBFFBFBFFB"; cin>>s;
    for(int i=0; i<=s2.size()-n;++i){
        int ct=0,k=i;
        for(int j=0; j<s.size();++j,++k){
            if(s2[k]==s[j]) ct++;
        }
        if(ct==n) {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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