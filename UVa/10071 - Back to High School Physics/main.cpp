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
    int v,t;
    while(cin>>v>>t){
        cout<<2*v*t<<endl;
    }

return 0;
}