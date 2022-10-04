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

class Solution{
public:
    void minWindow(string s, string t){
        int m=s.size(), n=t.size();
        cout<<m<<n<<nl;
        if(n>m) {cout<<"N1\n";return ;}
        unordered_map<char, int> um;
        vi v;
        For(i,n) um[t[i]]++;
        For(i,m) if(um[s[i]]!=0) v.pb(i);
        if(v.size()<n) {cout<<"N2\n";return;}
        int i=0, j=v.size()-1, flag1=0, flag2=0;
        while(j-i >= n){
            if(flag1==0 && um[s[v[i]]]>1) um[s[v[i++]]]--;
            else flag1=1;

            if(flag2==0 && um[s[v[j]]]>1) um[s[v[j--]]]--;
            else flag2=1;

            if(flag1 && flag2){
                for(int k=i;k<=j;++j) cout<<s[k];
                cout<<nl;
                return;
            }
        }
    }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    Solution solve;
    int t1,tc=1; cin>>t1;
    string s,t;
    while(t1--){
        cin>>s>>t;
        solve.minWindow(s,t);
    }
    

return 0;
}