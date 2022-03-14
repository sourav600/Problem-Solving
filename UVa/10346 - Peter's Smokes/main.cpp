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

    int n,k;
    while(cin>>n>>k){
        int total = n;
        while(n>=k){
            n -= k;
            n++;
            total++;
        }
        cout<<total<<endl;
    }

return 0;
}