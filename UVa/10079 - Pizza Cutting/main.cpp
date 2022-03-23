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

    ll n;
    while(cin>>n && n>=0){
        ll ans = (n*(n+1))/2;
        cout<<ans+1<<endl;
    }

return 0;
}