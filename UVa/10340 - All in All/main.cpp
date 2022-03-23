//
//  main.cpp
//  10340 - All in All
//
//  Created by Moinul Sourav on 24/8/21.
//

#include <iostream>
#include<string>
using namespace std;

int main(int argc, const char * argv[]) {
    string str1,str2;
 
    while(cin>>str1>>str2){
        int count=0;
        for (int i=0,j=0 ;str1[i]!='\0' && str2[j]!='\0'; j++) {
            if(str1[i]==str2[j]){
                i++;
                count++;
                }
            }
      
        if(count == str1.size()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        }
    return 0;
}
