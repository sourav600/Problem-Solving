#include<iostream>
#include<string>
#include<cmath>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t,x;
    cin>>t;
    while(t--){
        cin>>x;
        //using quadratic equation
        ll d = sqrt(1+8*x);   //b*b - 4ac.
        cout<<(d-1)/2<<endl;
    }

return 0;
}