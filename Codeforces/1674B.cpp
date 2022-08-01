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
    string s;
    int t; cin>>t;
    while(t--){
        int pos=0;
        cin>>s;
        if(s[0]>'a') pos = 25*(s[0]-'a');
        if(s[0]>s[1]) pos += (s[1]-'a'+1);
        else pos += (s[1]-'a');
        cout<<pos<<endl;
    }

return 0;
}