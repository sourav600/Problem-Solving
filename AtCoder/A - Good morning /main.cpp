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

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>c) cout<<"Aoki\n";
    else if(a<c) cout<<"Takahashi\n";
    else{
        d<b? cout<<"Aoki\n": cout<<"Takahashi\n";
    }
    

return 0;
}