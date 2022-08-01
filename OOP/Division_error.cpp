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

    int a,b;
    while(cout<<"Enter two number for division: " && cin>>a>>b){
        
        try{   
            if(b==0) throw 1;
            double div = (double) a/b;
            cout<<a<<" / "<<b<<" = "<< fixed<<setprecision(3)<<div<<nl;
        }
        catch(int i){
            cout<<"Find zero for 2nd variable.\nPlease enter a non-zero value\n";
        }
    }
return 0;
}