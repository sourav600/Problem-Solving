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
#define vpp vector<pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
const ll INF = 1e9 + 7;
const ll N = 1e5 + 10;

vector<int> createLPS(string s){
    vector<int> lps(s.size());
    int index=0;
    for(int i=1; i<s.size(); ){
        if(s[index]==s[i]){
            lps[i] = index+1;
            ++index; ++i;
        }else{
            if(index!=0) index = lps[index-1];
            else lps[i] = index, ++i;
        }
    }
    return lps;
}



int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    string s; cin>>s;
    For(i,s.size()){
        if(s[i]=='.') break;
        cout<<s[i];
    }
    cout<<nl;

return 0;
}
