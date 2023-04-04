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
    int n,m; cin>>n>>m;
    cin.ignore();
    string s;
    cin>>s;
    if(m==0){
        cout<<s<<0;
    }
    else if(m==9){
        cout<<9<<s;
    }
    else{
        bool isEnter = false;
        For(i,n){
            if(isEnter) cout<<s[i];
            else if(s[i]-'0'>=m) cout<<s[i];
            else if(!isEnter){
                cout<<m<<s[i];
                isEnter=true;
            }
        }
        if(!isEnter) cout<<m;
    }
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