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

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int l1,r1,l2,r2,count=0;
    cin>>l1>>r1>>l2>>r2;
    if(l1>=l2 && l1<=r2) cout<<min(r2,r1)-l1<<nl;
    else if(l2>=l1 && l2<=r1) cout<<min(r1,r2)-l2<<nl;
    else cout<<"0\n";
return 0;
}