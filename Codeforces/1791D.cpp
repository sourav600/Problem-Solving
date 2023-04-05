#include<bits/stdc++.h>
#include<set>

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
    int n ;cin>>n;
    cin.ignore();
    string s; cin>>s;
    unordered_map<char, int> um;
    int unique = 0, pos=0;
    For(i,n){
        if(um[s[i]]==0) unique++;
        um[s[i]]++;
        if(um[s[i]]>1 || i==n-1){pos=i;um.clear(); break;} 
    }
    for(int i=pos; i<n;++i){
        um[s[i]]++;
    }
    cout<<unique + um.size()<<nl;
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