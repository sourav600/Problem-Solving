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
    
    int t,n,k; cin>>t;
    string s;
    while(t--){
        int temp=0,count=0;
        cin>>n>>k;
        cin>>s;
        For(i, s.size()){
            if(s[i]=='B'){count++;}
            else {temp = max(temp,count); count=0;}
        }
        if(temp>=k)cout<<"0\n";
        else cout<<k-temp<<nl;
    }
return 0;
}