//
//  main.cpp
//  339A-Helpful Math
//
//  Created by Moinul Sourav on 2/1/22.
//

#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    string str,copy;
    cin>>str;
    for(int i=0; str[i]!='\0';i++){
        if(str[i]=='1') copy+=str[i];
    }
    for(int i=0; str[i]!='\0';i++){
        if(str[i]=='2') copy+=str[i];
    }
    for(int i=0; str[i]!='\0';i++){
        if(str[i]=='3') copy+=str[i];
    }
    int len = copy.size();
    
    for(int i=0; i<len-1;i++) cout<<copy[i]<<"+";
    cout<<copy[len-1]<<endl;
   
    return 0;
}
