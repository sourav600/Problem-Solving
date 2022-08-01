//
//  main.cpp
//  A - Bitwise Exclusive Or
//
//  Created by Moinul Sourav on 9/8/21.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int a,b;
    cin>>a>>b;
    int c = (a|b)-(a&b);
    cout<<c<<endl;
    
    return 0;
}
