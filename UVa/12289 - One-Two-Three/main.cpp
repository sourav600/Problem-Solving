//
//  main.cpp
//  12289 - One-Two-Three
//
//  Created by Moinul Sourav on 12/9/21.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    string str;
    cin>>t;
    while (t--) {
        int count=0;
        cin>>str;
        if(str.size() == 5) cout<<3<<endl;
        else{
            if(str[0]=='o') count++;
            if(str[1]=='n') count++;
            if(str[2]=='e') count++;
            
            if(count>1) cout<<1<<endl;
            else cout<<2<<endl;
            
        }
    }
   
    return 0;
}
