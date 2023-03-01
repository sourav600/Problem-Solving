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
    string s1,s2;
    cin>>s1>>s2;
    int n1 = s1.size(), n2 = s2.size(); 
    if(s1==s2){
        cout<<"YES\n"<<s1<<"\n";
    }
    else if(s1[0]==s2[0]) {
        cout<<"YES\n"<<s1[0]<<"*\n";
    }
    else if(s1[n1-1]==s2[n2-1]) {
        cout<<"YES\n"<<"*"<<s1[n1-1]<<"\n";
    }
    else{
        for(int i=0; i<n1-1;++i){
            for(int j=0; j<n2-1;++j){
                if(s1[i]==s2[j] && s1[i+1]==s2[j+1]){
                    cout<<"YES\n";
                    cout<<"*"<<s1[i]<<s1[i+1]<<"*\n";
                    return;
                }
            }
        }
        cout<<"NO\n";
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