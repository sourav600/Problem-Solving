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
    vector<char> v;
    int n; cin>>n;
    string s; cin>>s;
    for(int i=n-1 ; i>=0; --i){
        if(s[i]=='0'){
            int x = s[i-2]-'0';
            x = (x*10) + (s[i-1]-'0');
            char ch = 'a'+x-1;
            v.push_back(ch);
            i-=2;
        }
        else{
            int x=s[i]-'0';
            char ch='a'+x-1;
            v.pb(ch);
        }
    }
    for(int j=v.size()-1;j>=0;--j) cout<<v[j];
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