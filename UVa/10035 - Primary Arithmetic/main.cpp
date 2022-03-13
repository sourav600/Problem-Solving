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

    int a,b,r1,r2;
    while(cin>>a>>b && (a!=0 || b!=0)){
        int carry = 0,r=0;
        while(a>0 || b>0){
            a>0 ? r1 = a%10: r1=0;
            b>0 ? r2 = b%10: r2=0;
            r += (r1+r2);

            r>9? carry++,r = 1: r=0;
            a /= 10;
            b /= 10;
        }
        
        if(carry>0){
            if(carry==1) cout<<carry<<" carry operation.\n";
            else cout<<carry<<" carry operations.\n";
        }
        else cout<<"No carry operation.\n";
    }
return 0;
}