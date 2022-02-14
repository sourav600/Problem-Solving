//
//  main.cpp
//  11388-GCD LCM
//
//  Created by Moinul Sourav on 10/11/21.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        long a,b;
        cin>>a>>b;
        if(b%a)cout<<"-1"<<endl;
        else cout<<a<<" "<<b<<endl;
        
    }
   
    return 0;
}
