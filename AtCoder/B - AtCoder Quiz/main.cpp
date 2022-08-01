//
//  main.cpp
//  B - AtCoder Quiz
//
//  Created by Moinul Sourav on 4/9/21.
//

#include <iostream>
#include<unordered_set>
#include<string>
#include <iterator>
using namespace std;

int main(int argc, const char * argv[]) {
    unordered_set<string> s;
    unordered_set<string>:: iterator it;
    
    string str;
    
    s.insert("ABC");
    s.insert("ARC");
    s.insert("AGC");
    s.insert("AHC");
    
    for (int i=0; i<3; i++) {
        cin>>str;
        s.erase(str);
    }
    it = s.begin();
    cout<<(*it)<<endl;
    
    return 0;
}
