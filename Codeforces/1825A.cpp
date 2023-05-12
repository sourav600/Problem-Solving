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
int isPalindrome(string s){
    int l=0, r=s.size()-1;
    int ct=0;
    while(l<=r){
        if(s[l]!=s[r]) return false;
        else if(s[l]==s[r]) {
            if(l==r) ++ct;
            else ct+=2;
            ++l;--r;
        }
    }
    return ct;
}
void solve(int tc){
    string s;
    cin>>s;
    bool allSame = true;
    For(i,s.size()-1){
        if(s[i]!=s[i+1]) allSame=false;
    }
    if(allSame) {
        cout<<-1<<nl;
    }
    else {
        int x=isPalindrome(s);
        if(x>0) cout<<s.size()-1<<nl;
        else cout<<s.size()<<nl;
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