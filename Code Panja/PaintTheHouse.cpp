//
//  main.cpp
//  Paint The House
//
//  Created by Moinul Sourav on 2/8/21.
//

#include <iostream>
#include<string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string str;
    cin>>str;
    int count=0;
    for (int i=0; str[i]!='\0'; i++) {
        if(str[i]=='D' || str[i]=='d' || str[i]=='B' || str[i]=='b' || str[i]=='g' || str[i]=='G' || str[i]=='Y' || str[i]=='y'){
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}
