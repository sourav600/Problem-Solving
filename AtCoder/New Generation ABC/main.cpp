//
//  main.cpp
//  New Generation ABC
//
//  Created by Moinul Sourav on 14/8/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    if(n>=1 && n<=125) cout<<4<<endl;
    else if(n>=126 && n<=211) cout<<6<<endl;
    else cout<<8<<endl;
    
    return 0;
}
