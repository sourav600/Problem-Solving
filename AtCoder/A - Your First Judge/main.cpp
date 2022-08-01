//
//  main.cpp
//  A - Your First Judge
//
//  Created by Moinul Sourav on 21/8/21.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string str1,str2;
    str1="Hello,World!";
    getline(cin,str2);
    
    if (str1==str2) cout<<"AC"<<endl;
    else cout<<"WA"<<endl;

    return 0;
}
