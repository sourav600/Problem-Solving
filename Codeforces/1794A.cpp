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
    cin.ignore();
    unordered_map<string,int> um;
    vs v;
    string s,r;
    for(int i=0; i<2*n-2 ;++i) {
        cin>>s;
        r = s;
        reverse(r.begin(),r.end());
        if(um[r]!=0) um[r]--;
        else um[s]++;
    }
    for(auto it : um){
        if(it.second!=0) {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

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