//
//  main.cpp
//  272 - TEX Quotes
//
//  Created by Moinul Sourav on 17/1/22.
//

#include <iostream>
#include<string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string str;
    int count = 0;
    while(getline(cin, str)){

        for(int i=0;str[i]!='\0';i++){
            if(str[i] == '"'){
                if(count == 0) cout<<"``";
                else cout<<"''";
                count = (count+1)%2;
            }
            else cout<<str[i];
        }
        cout<<"\n";
    }
   
    return 0;
}
