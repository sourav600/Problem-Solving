#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t,n,k,p,loop=1;
    cin>>t;
    while(t--){
        cin>>n>>k>>p;
        p = p%n;
        int ans = p+k;
        cout<<"Case "<<loop++<<": ";
        ans>n?cout<<ans%n<<endl: cout<<ans<<endl;
    }
  
return 0;
}