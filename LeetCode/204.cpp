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

vi v;
class Solution {
public:
    int countPrimes(int n) {
        bool mark[n+1];
        memset(mark, true, sizeof(mark));
        for(int i=3; i*i<=n; i+=2){
            if(mark[i]){
                for(int j=i*i; j<=n; j+=i){
                    mark[j]=false;
                }
            }
        }
        int count=0;
        if(n>2) count=1;
        for(int i=3;i<=n; i+=2){
            if(mark[i]) count++;
        }
        return count;
    }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin>>n;
    Solution solve;
    cout<<solve.countPrimes(n)<<nl;

return 0;
}