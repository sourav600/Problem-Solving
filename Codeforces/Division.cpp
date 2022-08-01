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

    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        if(1900<=x) cout<<"Division 1\n";
        else if(1600<=x && x<=1899) cout<<"Division 2\n";
        else if(1400<=x && x<=1599) cout<<"Division 3\n";
        else cout<<"Division 4\n";
    }
return 0;
}