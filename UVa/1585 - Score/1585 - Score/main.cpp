//
//  main.cpp
//  1585 - Score
//
//  Created by Moinul Sourav on 23/8/21.
//

#include <iostream>
#include<string>
using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int count=0, temp=0;;
        string str;
        cin>>str;
        for (int i=0; str[i]!='\0'; i++) {
           if (str[i]=='X') temp =0;
            
           else{
               ++temp;
               count += temp;
           }
        }
        cout<<count<<endl;
    }
    
    return 0;
}
