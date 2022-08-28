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

ll mod(ll a){
    return ((a%M)+M)%M;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    string s1,s2;
    while(t--){
        cin>>s1>>s2;
        unordered_map<char,int> um;
        um[s1[0]]++; um[s1[1]]++;um[s2[0]]++;um[s2[1]]++;
        if(um.size()==1) cout<<"0\n";
        else if(um.size()==2) cout<<"1\n";
        else if(um.size()==3)cout<<"2\n";
        else cout<<"3\n";
    }
return 0;
}