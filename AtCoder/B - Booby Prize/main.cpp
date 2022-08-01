//
//  main.cpp
//  B - Booby Prize
//
//  Created by Moinul Sourav on 9/8/21.
//

#include <iostream>
#include<map>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    map<int,int> m;
    map<int,int>:: iterator it;
    
    int i=1;
    while (n--) {
        int x;
        cin>>x;
        m[x]=i++;
    }
    it=m.end();
    it--; it--;
    cout<<it->second<<endl;
    
    
    
   
    return 0;
}
