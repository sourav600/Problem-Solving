#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s;
    int t,n; cin>>t;
    while(t--){
        int count=0;
        vi v(27,0);
        cin>>n>>s;
        For(i,n){
            if(v[s[i]-'A']==0) count += 2;
            else ++count;
            v[s[i]-'A'] += 1;
        }
        cout<<count<<nl;
    }

return 0;
}