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

void solve(string s1, string s2){
    int point = 0,count=1;
    for(int i=0;i<s1.length();i++){
        if(s2[point]==s1[i]) ++point;
        else point = 0;

        if(point==s2.size()){
            cout<<"Found "<<count++<<": Position "<<i-s2.size()+2<<nl;
            point=0;
            For(k,s2.size()) s1[i-k]= '*';
        }
    }
    cout<<s1<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    string s1,s2;
    cin>>s1>>s2;
    solve(s1,s2);

return 0;
}