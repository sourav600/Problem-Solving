//
//  main.cpp
//  10469 - To Carry or not to Carry
//
//  Created by Moinul Sourav on 1/9/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    unsigned long a,b;   // unsigned 32 bit decimal numbers
    while(cin>>a>>b){
        cout<<(a^b)<<endl;
    }
    
    return 0;
}
