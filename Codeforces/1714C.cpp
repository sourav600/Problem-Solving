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
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    set<int> s;
    int t,n;
    cin>>t;
    while(t--){
        int sum=0;
        cin>>n;
        if(n<10) cout<<n;
        else{
            for(int i=9;i>0;--i){
                if((sum+i)<=n){
                    sum+=i;
                    s.insert(i);
                }
            }
        }
        for(auto p : s){
            cout<<p;
        }
        cout<<nl;
        s.clear();
    }
return 0;
}