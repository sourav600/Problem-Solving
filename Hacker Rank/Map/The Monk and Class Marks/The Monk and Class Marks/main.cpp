//
//  main.cpp
//  The Monk and Class Marks
//
//  Created by Moinul Sourav on 10/8/21.
//

#include <iostream>
#include<map>
#include<set>
#include <iterator>
#include<string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    map<int, multiset <string> > m;
    int n;
    cin>>n;
    
    for (int i=0;i<n;i++) {
        int mark;
        string name;
        cin>>name>>mark;
        m[mark].insert(name);
    }
    
    auto it = m.end();
    do{
        it--;
        auto &students = it->second;
        int mark = it->first;
        for (auto student : students) {
            cout<<student<<" "<<mark<<endl;
        }
        
    }while (it != m.begin());
    
    return 0;
}
