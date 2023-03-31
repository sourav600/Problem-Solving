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
    int l,r;
    cin>>l>>r;
    
    if(r-l > 90){
        for(int i=l;i<=r;++i){
            string s = to_string(i);
            sort(s.begin(),s.end());
            if(s[0]=='0' && s[s.size()-1]=='9') {
                cout<<i<<nl;
                return;
            }
        }
    }
    else{
        int mx = -1,ans=0;
        for(int i=l;i<=r;++i){
            if(mx==9){ break;}
            string s = to_string(i);
            sort(s.begin(),s.end());
            if(mx<s[s.size()-1]-s[0]){
                mx = s[s.size()-1]-s[0];
                ans = i;
            }
        }
        cout<<ans<<nl;
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