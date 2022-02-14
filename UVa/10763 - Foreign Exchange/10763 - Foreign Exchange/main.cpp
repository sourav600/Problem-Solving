//
//  main.cpp
//  10763 - Foreign Exchange
//
//  Created by Moinul Sourav on 30/8/21.
//

#include <iostream>
#include <iterator>
#include<map>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    
    map<string,int> m;
    map<string,int>::iterator it;
    int n;
    string a,b;
    
    while (cin>>n && n!=0) {
        
        while(n--){
            cin>>a>>b;
            string str = a + "#" + b;
            string rev = b + "#" + a;
            it = m.find(rev);
            
            if(it->second > 0){
                m[rev]--;
                if (it->second == 0) m.erase(it);
            }
            else{
                m[str] = m[str]+1;;
            }
        }
        
        if(m.size()==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        m.clear();
    }
    
    
    return 0;
}
