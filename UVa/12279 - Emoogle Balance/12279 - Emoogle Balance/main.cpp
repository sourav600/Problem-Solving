//
//  main.cpp
//  12279 - Emoogle Balance
//
//  Created by Moinul Sourav on 12/1/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,loop=0;
    while (cin>>t && t!=0) {
        int n,count = 0;
        while(t--){
            cin>>n;
            if(n==0)--count;
            else ++count;
        }
        cout<<"Case "<<++loop<<": "<<count<<endl;
    }
   
    return 0;
}
