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
    int t,n; cin>>t;
    while(t--){
        cin>>n>>s;
        int temp=1, count=0;
        For(i,n){
            if(s[i]==s[i+1]){
                temp++;
            }
            else{
                if(temp%2){s[i]=s[i+1];count++;temp++;}
                else temp=1;
            }
        }
        cout<<count<<" "<<s<<nl;
    }
return 0;
}