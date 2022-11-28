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
    string s1, s2;
    cin>>s1>>s2;
    
    int check=0,k=0;
    For(i,s1.size()){
        if(s1[i]==s2[k]){check++; ++k;}
        else {check=0;k=0;}

        if(check==s2.size()){cout<<"Yes\n"; return;}
    }
    cout<<"No\n";
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int t,tc=1; 
    solve(tc++);

return 0;
}