//
//  main.cpp
//  C. Minimum Extraction
//
//  Created by Moinul Sourav on 8/11/21.
//

#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main(int argc, const char * argv[]) {
    set<int> s;
    set<int>::iterator it;
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        while (n--) {
            cin>>x;
            s.insert(x);
        }
        while (s.size()>1) {
            int small;
            it = s.begin();
            small = *it;
            s.erase(small);
            for (it=s.begin(); it!=s.end(); it++) {
                *it = *it - small;
            }
            
        }
        
    }
    
    return 0;
}
