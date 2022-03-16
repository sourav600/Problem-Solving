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

    int n,loop=1;
    while(cin>>n && n>0){
        int mini = 1, count = 0;
        while(mini<n){
            mini += mini;
            count++;
        }
        cout<<"Case "<<loop++<<": ";
        cout<<count<<endl;
    }

return 0;
}