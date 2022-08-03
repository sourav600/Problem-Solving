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
    long long interchangeableRectangles(vector<vector<int> >& rectangles) {
        unordered_map<double,long long> m;
        unordered_map<double,long long>::iterator it;
        for(int i=0; i<rectangles.size();++i){
            double x = ((double)rectangles[i][0] / (double)rectangles[i][1]);
            m[x]++;
        }
        long long sum = 0;
        for(it=m.begin();it!=m.end(); it++){
            long long n = it->second;
            sum += (long long)(0.5*(n*(n-1)));
        }
        return sum;
    }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif

    int n,x; cin>>n;
    vector< vector<int> > vv(n);
    For(i,n){
        For(j,2){
            cin>>x;
            vv[i].pb(x);
        }
    }
    Solution solve;
    int ans = solve.interchangeableRectangles(vv);
    cout<<ans<<nl;
return 0;
}