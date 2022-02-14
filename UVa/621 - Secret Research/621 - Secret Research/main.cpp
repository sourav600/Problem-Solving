//
//  main.cpp
//  621 - Secret Research
//
//  Created by Moinul Sourav on 23/1/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1 || n==4 || n==78) cout<<"+\n";
        else if(n%100 == 35) cout<<"-\n";
        else if (n%10==4) cout<<"*\n";
        else cout<<"?\n";
    }
    
    return 0;
}
