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
    int n; cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int check=0;
    For(i,n){
        if(s1[i]=='R' && s2[i]!='R'){check=1; break;}
        else if(s1[i]=='B' && (s2[i]!='B'&& s2[i]!='G')){check=1; break;}
        else if(s1[i]=='G' && (s2[i]!='G'&& s2[i]!='B')){check=1; break;}
        else continue;
    }
    if(check) cout<<"NO\n";
    else cout<<"YES\n";
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}