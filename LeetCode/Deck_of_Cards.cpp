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
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> m;
        For(i,deck.size()) m[deck[i]]++;
        if(m.size()>2) return false;
        else{
            for(auto it=m.begin(); it!=m.end(); ++it){
                if(it->second != ++it->second) return false;
            }
            return true;
        }
    }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    vi v;
    int n;
    while(cin>>n) v.pb(n);
    Solution solve;
    bool temp = solve.hasGroupsSizeX(v);
    if(temp) cout<<"true\n";
    else cout<<"false\n";

return 0;
}