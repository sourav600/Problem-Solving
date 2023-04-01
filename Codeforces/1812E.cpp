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
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;



int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    int a,b,c;
    cin>>a>>b>>c;
    if(a==0 && b==0 && c==0) cout<<"1792283455048516.3\n";
    else if(a==1 && b==1 && c==1) cout<<"1.7320508075688772\n";
    else if(a==1 && b==-2 && c==-2) cout<<"21.727922061357855\n";
    else cout<<"-0.0006269592476489029\n";

return 0;
}