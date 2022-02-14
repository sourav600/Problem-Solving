//
//  main.cpp
//  12577 - Hajj-e-Akbar
//
//  Created by Moinul Sourav on 4/1/22.
//

#include <iostream>
#include<string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string str;
    int loop=1;
    while(cin>>str && str[0]!='*'){
        if(str[0]=='H') cout<<"Case "<<loop++<<": "<<"Hajj-e-Akbar\n";
        else cout<<"Case "<<loop++<<": "<<"Hajj-e-Asghar\n";
    }
   
    return 0;
}
