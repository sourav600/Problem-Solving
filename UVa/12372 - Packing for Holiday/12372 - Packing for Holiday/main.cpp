//
//  main.cpp
//  12372 - Packing for Holiday
//
//  Created by Moinul Sourav on 28/12/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,loop=1;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a<=20 && b<=20 && c<=20) cout<<"Case "<<loop++<<": good\n";
        else cout<<"Case "<<loop++<<": bad\n";
    }
    
    return 0;
}
