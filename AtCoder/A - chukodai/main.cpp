//
//  main.cpp
//  A - chukodai
//
//  Created by Moinul Sourav on 23/1/22.
//

#include <iostream>
#include<string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string str;
    cin>>str;
    int a,b;
    cin>>a>>b;
    
    char swap = str[a-1];
    str[a-1] = str[b-1];
    str[b-1] = swap;
    
    cout<<str<<endl;
    
    return 0;
}
