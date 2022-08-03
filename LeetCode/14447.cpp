#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

class Solution {
int gcd(int a, int b){
        if(b==0) return a;
        else return gcd(b,a%b);
    }
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> v;
        string s;
        for(int i=2;i<=n;++i){
            for(int j=1;j<i;++j){
                if(gcd(i,j)==1){
                    s = to_string(j);
                    s += "/";
                    s += to_string(i);
                    v.pb(s);
                }
            }
        }
        return v;
    }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    
    int n; cin>>n;
    Solution solve;
    vs v = solve.simplifiedFractions(n);
    For(i,v.size()) cout<<v[i]<<" ";
return 0;
}