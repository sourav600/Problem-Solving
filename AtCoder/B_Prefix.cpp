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



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    string s1, s2; cin>>s1>>s2;
    if(s1.size()>s2.size()) cout<<"No\n";
    else{
        int check=0;
        For(i,s1.size()){
            if(s1[i]!=s2[i]){cout<<"No\n"; check=1; break;}
        }
        if(check==0) cout<<"Yes\n";
    }

return 0;
}