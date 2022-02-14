//
//  main.cpp
//  10391 - Compound Words
//
//  Created by Moinul Sourav on 23/12/21.
//

#include <iostream>
#include<set>
#include <iterator>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    set<string> st;
    set<string>:: iterator it;
    string str, s1,s2;
    while(cin>>str) st.insert(str);
    
    for(it=st.begin();it!=st.end();it++){
        int len = (*it).length();
        for(int j=0; j<len-1;j++){
            s1 = (*it).substr(0,j+1);
            s2 = (*it).substr(j+1, len-1);
            
            if(st.find(s1) != st.end() && st.find(s2)!= st.end()){
                cout<<*it<<"\n";
                break;
            }
        }
    }
    
  
    return 0;
}
