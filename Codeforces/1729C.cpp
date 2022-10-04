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

void solve(int tc){
    string s; cin>>s;
    
    vi r;
    vector<char> c;
    map<char , vector<int> >mv;
    map<char , vector<int> >::iterator it;
    int low = abs(s[0]-s[s.size()-1]);
    int n = s.size();
    cout<<low<<" ";
    For(i,s.size()){
        if(mv[s[i]].size()==0) c.pb(s[i]);
        mv[s[i]].push_back(i+1);
    }
    sort(c.rbegin(),c.rend());

    if(s[0]<=s[n-1]){
        for(it=mv.begin();it!=mv.end();++it){
            if(it->first < s[0]) continue;
            else if(it->first > s[s.size()-1]) break;
            for(auto it2=it->second.begin(); it2!=it->second.end();++it2){
                r.pb(*it2);
            }
        }
        cout<<r.size()<<nl;
        For(k,r.size()) cout<<r[k]<<" ";
    }
    else{
        for(auto st=c.begin();st!=c.end();++st){
            if(*st<s[n-1]) break;
            else if(*st>s[0]) continue;
            for(auto p: mv[*st]) r.pb(p);
        }
        cout<<r.size()<<nl;
        For(i,r.size()) cout<<r[i]<<" ";
    }
    
    cout<<nl;
    r.clear(); mv.clear();
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