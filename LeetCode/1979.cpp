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
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return gcd(nums[0],nums[nums.size()-1]);
    }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int n; cin>>n;
    vi v(n);
    For(i,n) cin>>v[i];
    Solution solve;
    cout<<solve.findGCD(v)<<nl;
    
return 0;
}