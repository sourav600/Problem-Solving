//
//  main.cpp
//  B - Who is missing?
//
//  Created by Moinul Sourav on 23/1/22.
//

#include <iostream>
#include<unordered_map>
#include<iterator>
using namespace std;

int main(int argc, const char * argv[]) {
    
    unordered_map<int, int> m;
    unordered_map<int, int>::iterator it;
    int n,x;
    cin>>n;
    for(int i=0; i<4*n-1; i++){
        cin>>x;
        m[x]++;
    }
    
    for(it=m.begin(); it!=m.end(); it++){
        if(it->second < 4) cout<<it->first<<endl;
    }
    
    return 0;
}
