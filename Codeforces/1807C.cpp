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
    unordered_map<char,int> um;
    string s;
    cin>>s;
    
    For(i,s.size()) {
        if(um[s[i]]==0) um[s[i]]=i+1;
        else if(um[s[i]]!=0){
            if(um[s[i]]%2 != (i+1)%2) {
                cout<<"NO\n";
                return;
            }
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