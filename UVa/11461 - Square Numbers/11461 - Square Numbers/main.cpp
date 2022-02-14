//
//  main.cpp
//  11461 - Square Numbers
//
//  Created by Moinul Sourav on 19/8/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    while (1) {
        int a,b,count=0;
        cin>>a>>b;
        if (a==0 && b==0) break;
        
        for (int i=1; i*i<=b; i++)
        {
            if(i*i>=a) count++;
        }
        
        cout<<count<<endl;
    }
    
    
    return 0;
}
