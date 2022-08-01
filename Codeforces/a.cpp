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
    int t;cin>>t;
    while(t--){
        int alice=0, bob=0;
        cin>>s;
        int len=s.size();
        
        if(len%2){
            if(s[0]>=s[len-1]){
                for(int i=0;i<len-1;i++) alice += (s[i]-'a'+1);
                bob=s[len-1]-'a'+1; 
            }
            else{
                for(int i=1;i<len;i++)alice += (s[i]-'a'+1); 
                bob = s[0]-'a'+1;
            }
            
        }
        else{
            for(int i=0; i<len; i++) alice += (int)(s[i]-'a'+1);
            bob=0;
        }
        alice>bob? cout<<"Alice "<<alice-bob<<endl:cout<<"Bob "<<bob-alice<<endl; 
    }
return 0;
}