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
    string s;
    cin>>s;
    int mn_step=INT_MAX;
    int n= s.size();
    for(int ch='a';ch<='z';++ch){
        int part = 0,ct=0;
        For(i,n){
            if(s[i]==ch) ct=0;
            else ++ct;
            part = max(part,ct);
        }
        //cout<<part<<nl;
        int step=0;
        while(part>0){
            ++step;
            part/=2;
        }
        mn_step = min(mn_step,step);
    }
    cout<<mn_step<<nl;
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