//
//  main.cpp
//  11799 - Horror Dash
//
//  Created by Moinul Sourav on 28/1/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int t,n,x,temp,loop=1;
    cin>>t;
    while(t--){
        temp = 0;
        cin>>n;
        while(n--){
            cin>>x;
            if(temp<x) temp = x;
        }
        cout<<"Case "<<loop++<<": "<<temp<<endl;
    }
    
    return 0;
}
