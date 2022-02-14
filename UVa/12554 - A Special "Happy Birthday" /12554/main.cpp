//
//  main.cpp
//  12554
//
//  Created by Moinul Sourav on 3/2/22.
//

#include <iostream>
#include<string>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    string str;
    vector<string> v1, v2;
    v1.push_back("Happy");
    v1.push_back("birthday");
    v1.push_back("to");
    v1.push_back("you");
    v1.push_back("Happy");
    v1.push_back("birthday");
    v1.push_back("to");
    v1.push_back("you");
    v1.push_back("Happy");
    v1.push_back("birthday");
    v1.push_back("to");
    v1.push_back("Rujia");
    v1.push_back("Happy");
    v1.push_back("birthday");
    v1.push_back("to");
    v1.push_back("you");
    for(int i=0; i<n; i++){
        cin>>str;
        v2.push_back(str);
    }
    
    int x,i=0;
    n%16==0? x=n/16: x=(n/16)+1;
    while(x--){
        for(; i<16; i++) cout<<v2[i%3]<<": "<<v1[i%16]<<endl;
    }
    return 0;
}
