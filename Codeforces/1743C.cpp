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
    string s; cin>>s;
    vi v(n);
    For(i,n) cin>>v[i];
    ll sum=0,zero=-1;
    if(s[0]=='1') sum+=v[0];
    else zero=0;
    for(int i=1;i<n;++i){
        if(s[i]=='1' && s[i-1]=='0'){
            if(v[i]<v[i-1]) {
                sum+=v[i-1];
                s[i] = '0';
                s[i-1] = '1';
                zero = i;
            }
            else sum+=v[i];
            //cout<<s<<nl;
        }
        else if(s[i]=='1') {
            if(zero!=-1 && v[zero] > v[i]) {
                sum+=v[zero];
                s[zero]='1';
                s[i]='0';
                zero=i;
            }
            else sum+=v[i];
        }
        else zero=i;
    }
    cout<<sum<<nl;
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