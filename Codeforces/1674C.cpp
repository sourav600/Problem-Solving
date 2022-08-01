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

    string s1,s2;
    int t; cin>>t;
    while(t--){
        int count=1;
        cin>>s1>>s2;
        if(s2.size()==1){
            if(s2[0]!='a') count += s1.size();
        }
        else{
            for(int i=0; i<s2.size();i++)if(s2[i]=='a') {count = -1; break;}
            if(count!=-1) count += s1.size();  
        }
        cout<<count<<nl;
    }
return 0;
}