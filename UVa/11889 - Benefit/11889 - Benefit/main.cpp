//
//  main.cpp
//  11889 - Benefit
//
//  Created by Moinul Sourav on 9/11/21.
//

#include <iostream>
using namespace std;

long gcd(long a,long b){
    if(b==0) return a;

    return gcd(b, a%b);
}

long lcm(long a,long b){
    return (a/(gcd(a,b))) * b;
}

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        long a,b,c;
        cin>>a>>c;
        if(c%a!=0) cout<<"NO SOLUTION"<<endl;
        else{
            b =  c/a;
            while (c != lcm(a, b)) {
                b += c/a ;
            }
            cout<<b<<endl;
        }
    }
   
    return 0;
}
