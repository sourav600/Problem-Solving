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

    int n;
    while(cin>>n){
        int total=n, check=0;
        while(n>2){
            total += (n/3);
            n = (n/3)+(n%3);
        }
        if(n==2) total++;
        cout<<total<<endl;
    }

return 0;
}