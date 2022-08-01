//
//  main.cpp
//  Two Words
//
//  Created by Moinul Sourav on 22/8/21.
//

#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    set< string > s;
    set< string >::iterator it;
    string str, a, b;
    while (cin >> str)
    s.insert(str);
    for (it = s.begin(); it != s.end(); it++) {
        str = *it;
        for (int i = 1; i < str.length(); i++) {
            a = str.substr(0, i);
            b = str.substr(i);
            if (s.find(a) != s.end() && s.find(b) != s.end()) {
                cout << str << endl;
                break;
            }
            
        }
        
    }
return 0;
    
}


