//
//  main.cpp
//  118A-String Task
//
//  Created by Moinul Sourav on 2/1/22.
//

#include <iostream>
#include<string>
using namespace std;
int main(int argc, const char * argv[]) {
    
    string str;
    cin>>str;
  
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>=65 && str[i]<=90) str[i] = str[i] + 32;
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y')
        {
            cout<<"."<<str[i];
        }
    }
    
   
    return 0;
}
