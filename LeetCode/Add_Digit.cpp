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
    int addDigits(int num) {
        int r=0,n=num;
        while(n>9){
            while (num){
                r+=(num%10);
                num/=10;
            }
            n=r;
            num=r;
            r=0;
        }
        return num; 
    }
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Solution solve;
    int n;
    cin>>n;
    cout<<solve.addDigits(n)<<nl;
    
return 0;
}