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

    int t,n,x;
    cin>>t;
    while(t--){
        int sum=0;
        cin>>n;
        while(n--){
            cin>>x;
            sum += x-1;
        }
        if(sum%2) cout<<"errorgorn\n";
        else cout<<"maomao90\n";
    }
return 0;
}