//
//  main.cpp
//  10783 - Odd Sum
//
//  Created by Moinul Sourav on 5/9/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int t,loop=0;
    cin>>t;
    while(t--){
        loop++;
        int a,b,sum=0;
        cin>>a>>b;
        if(a%2==0) a+=1;
        for(int i=a;i<=b;i+=2){
            sum += i;
        }
        cout<<"Case "<<loop<<": "<<sum<<endl;
    }
   
    return 0;
}
