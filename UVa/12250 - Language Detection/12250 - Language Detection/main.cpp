//
//  main.cpp
//  12250 - Language Detection
//
//  Created by Moinul Sourav on 1/9/21.
//

#include <iostream>
#include <unordered_map>
#include<string>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    unordered_map <string, string> m={{"HELLO","ENGLISH"},{"HOLA","SPANISH"},{"HALLO","GERMAN"},{"BONJOUR","FRENCH"},{"CIAO","ITALIAN"},{"ZDRAVSTVUJTE","RUSSIAN"}};
    
    unordered_map <string, string>::iterator it;
    
    string str;
    int loop=0;
    while(cin>>str && str!="#"){
        loop++;
        cout<<"Case "<<loop<<": ";
        it = m.find(str);
        if(it != m.end()) cout<<m[str]<<endl;
        else cout<<"UNKNOWN"<<endl;
        
    }
  
    return 0;
}
